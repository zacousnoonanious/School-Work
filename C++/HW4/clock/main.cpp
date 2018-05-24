#include <iostream>
#include <unistd.h>
#include "clock.h"

using namespace std;

int main()
{
	Clock c(23,59,50);
	while (true)
	{
		c.outputTime();
		sleep(1); // waits one second
	}
	return 0;
}


