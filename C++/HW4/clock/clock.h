#ifndef _CLOCK_
#define _CLOCK_

class Clock
{
  protected:
	// Time in 24 hour format.
	int hour, minute, second;
  public:
	Clock();
	Clock(int hour, int minute, int second);
	void outputTime();
	int getHour();
	int getMinute();
	int getSecond();
	virtual void tick();	// This is called once a second
				// to update the clock
  private:
	void startTimer(); // Internal timer for 1 second intervals
};

#endif
