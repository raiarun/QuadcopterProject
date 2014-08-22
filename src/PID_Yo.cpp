//  PID_Yo.cpp
//  PID_Yo
//
//  Created by Yosub Lee on 7/15/14.
//  Copyright (c) 2014 Yosub Lee. All rights reserved.
//  Updated Modified by Peter Quan
// 
//  Base source from 
//  http://brettbeauregard.com/blog/2011/04/improving-the-beginners-pid-introduction/
//
#include "PID_Yo.h"

PID::PID()
{
	setPoint(0);
	m_input     = 0;
	m_output    = 0;
	m_setpoint  = 0;
	m_iTerm    = 0;
	m_lastInput = 0;
	m_sampleTime = 1000;   
	m_sampleTimeSec = 0;	//(800hz), but since we are using the filter, it drops down to 300Hz
	m_ratio = 0;
	m_outMin = 0;
	m_outMax = 0;
	kp = 1;
	ki = 0.1;
	kd = 0.1;
}

PID::~PID(){}

double PID::compute(double m_input)
{
	double error = m_setpoint - m_input;
	
	m_iTerm += (error*m_sampleTime);	
	
	double dInput = (m_input - m_lastInput)/m_sampleTime;
	
	m_output = kp * error + ki*m_iTerm - kd * dInput;
	
	m_lastInput = m_input;
	
	return m_output;
}

void PID::setPoint(double point)
{
	m_setpoint = point;
	cout << "new SetPoint: " << m_setpoint << endl;
}

/*
void PID::setGains(double kp, double ki, double kd)
{
	this->kp = kp;
	this->ki = ki;
	this->kd = kd;
	std::cout << "P: " << this->kp << " I: " << this->ki << " D:" << this->kd << std::endl;
	std::cout << "Initialized \n";
	initialized = true;
}
*/
double PID::getPoint() {
	return m_setpoint;
}

double PID::getP() {
	return p;
}

double PID::getI() {
	return i;
}

double PID::getD() {
	return d;
}

void PID::setTunings(double kp2, double ki2, double kd2){
	//Record
	p = kp2;
	i = ki2;
	d = kd2;

	m_sampleTimeSec = m_sampleTime / 1000;
	kp = kp2;
	ki = ki2; // * m_sampleTimeSec;
	kd = kd2; // / m_sampleTimeSec;
}

void PID::setSampleTime(double newSampleTime){
	if(newSampleTime > 0){
		m_ratio = newSampleTime / m_sampleTime;
		ki *= m_ratio;
		kd /= m_ratio;
		m_sampleTime = newSampleTime;
	}
}

void PID::setOutputLimits(double min, double max){
	if(min > max) 
		return;
	
	m_outMin = min;
	m_outMax = max;
		
	if(m_output > m_outMax)
		m_output = m_outMax;
	
	else if(m_output < m_outMin)
		m_output = m_outMin;
	
	if(m_iTerm > m_outMax)
		m_iTerm = m_outMax;
	
	else if(m_iTerm < m_outMin)
		m_iTerm = m_outMin;
}

/*
Implementation of PID Algorithm:
Input  -> Pitch, Roll (Numeric values of orientations of the AHRS)
Output -> Adjustable values for the Motors' speed
PID Components:
- Proportional 
  Response ->  Also termed as 'Error term'. Difference of set point and input variable.
	       The proportional gain (Kc) determines the output response to the error signal.
	       Controlling Proportional Response (tunning Kc) is sufficient enough to stabilize
               the Quadcopter when there is not any external source is acting on the Copter.
- Integral 
  Response ->  Total sum of the previous Error terms. The Integral Response increases over time.
	       The effect is to drive the difference of set point and input variable (steady-state
	       Error term) to zero.
- Derivate 
  Response ->  Causes the output to decrease if the input variable is increasigly rapidly. It is 
               proportional to the change of input variable. The increase in the Derivative time (Td)
	       causes the controll system to react more strongly to changes in Error term and increases
	       the overall speed of the control system.
	       Source: http://www.ni.com/white-paper/3782/en/
*/
