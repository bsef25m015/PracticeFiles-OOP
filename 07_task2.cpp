#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time t;
	
	t.setTime(23, 59, 59);

	t.printTwelveHourFormat();
	t.printTwentyFourHourFormat();

	t.incSec();

	t.printTwelveHourFormat();
	t.printTwentyFourHourFormat();

	return 0;
}