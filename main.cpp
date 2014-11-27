<<<<<<< HEAD
#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
=======
/* 
Navy Drone Project - Virginia Tech
Marc Murphy 
Peter Quan 
Yosub Lee
Mohammad Rezwanul Islam 
Arun Rai 
Xin Gan
*/ 

#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <thread>
#include <string>
#include <sstream>

#include <stdio.h>
#include <unistd.h>
#include <thread>
#include "vectornav.h"
#include "serialDevice.h"
#include "pololuMaestroMotorController.h"
#include "fan.h"
#include "PID_Yo.h"
#include "FanControl.h"
/* Change the connection settings to your configuration. */
using namespace std;

int main()
{
//	const int BAUD_RATE = 115200;
	FanControl fanController;
	int keyboardInput = 0;
	cout << "Logging is On . . . . .\n";
	fanController.loggingOn();
	sleep(1);

	fanController.start();
	while(1) {
		cout << "\n\t(1).Set max. and min. speeds\n\t(2).Set PID\n\t(3).Set [x] Angle\n\t(4).Set [y] Angle\n\t(Any otherNumbers). STOP!!\n\n\t ";
		cin >> keyboardInput;
		if ( keyboardInput == 1 ) {
			int max = 0, min = 0;
			cout << "Max speed & Min Speed : ";
			cin >> max >> min;
			// fanController.setBaseSpeed(newSpeed);
			fanController.setMaxMinSpeed(max, min);
			system("clear");
		}
		else if ( keyboardInput == 2) {
			double p,i,d;
			cout << "\nP = ";
			cin >> p;
			cout << "\nI = ";
			cin >> i;
			cout << "\nD = ";
			cin >> d;
			fanController.setPidAll(p, i, d); 
		}
		else if (keyboardInput == 3) {
			double newX;
			cout << "\n[x] angle = ";
			cin >> newX;
			fanController.setPointPidX(newX);
		}
		else if (keyboardInput == 4) {
			double newY;
			cout << "\n[y] angle = ";
			cin >> newY;
			fanController.setPointPidY(newY);
		} 
		else {
			fanController.stop();
			break;
		}
		system("clear");	
		fanController.displaySetting();
	}
	cout << "Stopped.\n";
	return 0;
>>>>>>> c2d0d82739ff6eee08c53769264068c8dcb353ea
}
