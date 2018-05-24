#include <iostream>
#include <csignal>
#include <cstdio>
#include <unistd.h>
#include "clock.h"

using namespace std;

// These are some globals!  They are here because I'm using
// a C signals library to send a signal once a second. The library is designed
// for a non-OOP implementation, so this is how it's done. A more OOP approach
// would use threads, but I wanted to keep the implementation a little
// simpler. You don't need to know how this part works for the assignment.
void handleSignal(int num);     // Called every second
Clock* ptrClock;                // pointer to the Clock object.  The
                                // handleSignal function needs a way to
                                // access the class, so we keep a pointer
                                // here. Using this technique we
                                // can have only one clock in
                                // our program.


Clock::Clock() : hour(0), minute(0), second(0)
{
 	startTimer();
}

Clock::Clock(int hour, int minute, int second)
{
	this->hour = hour;
	this->minute = minute;
	this->second = second;
 	startTimer();
}

void Clock::outputTime()
{
	// Using the old C "printf" since it is easier
	// to format the output (e.g. pad with 0's to the left for
	// hour, minute, or second
	printf("%02d:%02d:%02d\n",hour,minute,second);
}
int Clock::getHour()
{
	return hour;
}
int Clock::getMinute()
{
	return minute;
}
int Clock::getSecond()
{
	return second;
}

// A second elapsed, update the clock variables
void Clock::tick()
{
	second++;
	if (second == 60)
	{
		minute++;
		second = 0;
	}
	if (minute == 60)
	{
		hour++;
		minute=0;
	}
	if (hour==24)
	{
		hour=0;
	}
}

// This function sends a signal to the "handleSignal" function
// after one second. It uses the Unix signal library which is why
// this is not compatible with Windows. 
void Clock::startTimer()
{
	ptrClock = this;  // Remember pointer to this clock object
 	signal(SIGALRM, handleSignal);
	alarm(1);
}

// This is called every second
void handleSignal(int signalNum)
{
	// Call the tick() method on the clock
	ptrClock->tick();
	alarm(1);
}

