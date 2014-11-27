
A quick guide to run the applications for running the Quadcopter:

In the host machine:
Follow the instructions to install Qt development tools in order to run
the Qt application,

1) Make sure you have g++ installed on your machine.
	If g++ is not installed, install g++, 
	$ sudo apt-get install g++
	
2) Install Qt librarie and tools,
	$ sudo apt-get install build-essential cmake qt4-qmake qt4-dev-tools
	if you like Qt development enviroment, install qt designer and qt creator,
	$ sudo apt-get qt4-designer qt4-doc gdb qtcreator 
3) $ qmake
4) $ make - it will generate an executable - ui
	4.1) Now, in the Gumstix,
		Go to file 'quad'
		run following commands:
		 1) $ sudo make
		 2) $ sudo ./QuadCopter
	 
5) run the application, $ sudo ./ui
6) Enter the IP address and a port number to connect to the Gumstix
	(Default IP and port values are given and it should work if 
	they are not changed.)
7) Enter start to start the application
8) Set the gain values - Pitch, Roll, and/or Yaw
9) Set motor speeds
10) Adjust speeds and PId gain values as necessary
11) Enter 'stop' to stop the program.
12) Go the step 4.1 to run the programs again.

NOTE: Ensure that the environment for running the quadcopter is safe!
