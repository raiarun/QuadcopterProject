//
//  Wrapper Class of AHRS(vn-100), Pololu, and PID. It's basically Fight controller.
//  Checks Angle values from AHRS(vn-100), and it runs PID and controls motors(x,y axis)
//  Additionally, It logs pid value and gyro values; x, y, z
//
//  Created by Yosub Lee on 7/23/14.
//  Copyright (c) 2014 Yosub Lee. All rights reserved.
///////////////////////////////////////////////////

//  Note //////////////////////////////////////////
// Log file is using CSV format
//

#ifndef FanControl__H
#define FanControl__H

#include <iostream>
#include <thread> 
#include <fstream>
#include <sstream>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctime>
#include <chrono>

#include "FanControl.h"
#include "pololuMaestroMotorController.h"
#include "fan.h"
#include "PID_Yo.h"
#include "vndevice.h"
#include "vn100.h"

using namespace std;

class FanControl {
public:
	FanControl(int BAUD_RATE = 115200);
	~FanControl();
	void loggingOn();
	void finishLogging();
	void setMotorSpeedAll(int speed);
	
	//PID settings
	void setOutputLimitsX(int min, int max);
	void setOutputLimitsY(int min, int max);
	void setPointPidX(double point);
	void setPointPidY(double point);
	void setBaseSpeed(int speed);
	void setPidAll(double p, double i, double d);	
	void displaySetting();
	void start();
	void stop();
	
	void setMaxMinSpeed(const int &, const int &);
private:   
	void initVN100();
	void initFanController();
	void writeLog();
	void writeLog(string message);
	void computePID();
	void controlMotors();
	void setMotorSpeed();
	void setPID();
	void setPID(PID *pid);
	void setSampleRate(double sampleRate);	
	void saveConfig();
	void restoreConfig();
	void setPidGainsX(double p, double i, double d);
	void setPidGainsY(double p, double i, double d);
	
	int max_Speed, min_Speed;
	// Variables
	bool logging;
	double yaw_var;
	volatile bool running;
	volatile double m_outputX, m_outputY, m_outputZ, pidOutLimitMax, pidOutLimitMin;
        int BAUD_RATE;
        float sampleRate;
        int baseSpeed, maxSpeed, minSpeed;
	double pGain, iGain, dGain;
        
	PID *pid_X;         // Pitch
	PID *pid_Y;         // Roll
	PID *pid_Z;         // Yaw
	string pololuPath;

	Vn100 vn100;
	VnYpr ypr;
	PololuMaestroMotorController *motorController;
	FanController *fanController;
	ofstream *Log;    
	//Timer to measure Sample time
	chrono::time_point<std::chrono::high_resolution_clock> m_now, m_lastTime;
	thread pidThread;
	//Temp Speed
	int speedY_1, speedY_2, speedX_3, speedX_4;
};

#endif /* defined(__FanControl__H) */
