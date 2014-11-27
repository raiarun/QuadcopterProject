#ifndef FAN_H
#define FAN_H

/**************************************
 * fan.h
 * Matthew Bailey
 * NEEC: Navy Robot Project
 * 2014-03-25
 *
 * This file describes an interface
 * to the main fan of the 
 * Ducted Fan Hovercraft.
 * This code uses the pololu maestro
 * motor controller interface.
 *
 ***************************************/


#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <fcntl.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>
//#include "gpio-event-drv.h"

class FanController {
public:
	FanController(PololuMaestroMotorController* m);
	~FanController();
	double getSpeed();
	double setSpeed(double speed, int dev = 0);
private:
	FanController();
	PololuMaestroMotorController* mc;
};

#endif
