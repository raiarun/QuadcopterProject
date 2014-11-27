#ifndef SERIAL_DEVICE
#define SERIAL_DEVICE

/**************************************
 * serialDevice.h
 * Matthew Bailey
 * NEEC: Navy Robot Project
 * 2014-03-25
 *
 * This file describes an interface
 * to a serial device.
 *
 ***************************************/

#include <iostream>
#include <fstream>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include <string>

class SerialDevice {
  public:
static const int DEFAULT_BAUD = 115200;
static const int BUFFERSIZE   = 2;
  	SerialDevice(char* newPort, int newBaud = SerialDevice::DEFAULT_BAUD);
    	SerialDevice(std::string newPort, int newBaud = SerialDevice::DEFAULT_BAUD);
  	~SerialDevice();
  	int readByte(char*);
  	int writeByte(char*);
  	int readBytes(char*, int);
  	int writeBytes(char*, int);

  private:
  	SerialDevice();
    void alternateSetup(std::string, int);
  	int fd;
  	char* buffer;
  	int baud;
//  	char* port;
    std::string port;
  	struct termios ttyAttr;
};

#endif
