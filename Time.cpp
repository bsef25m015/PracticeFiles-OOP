#include <iostream>
#include <iomanip>
#include "Time.h"

void Time::setHour(int h)
{
	if (h >= 0 && h <= 23)	hours = h;
	else					std::cout << "Invalid Hours!\n";
}

void Time::setMinute(int m)
{
	if (m >= 0 && m <= 59)	minutes = m;
	else					std::cout << "Invalid Minutes!\n";
}

void Time::setSecond(int s)
{
	if (s >= 0 && s <= 59)	seconds = s;
	else					std::cout << "Invalid Seconds!\n";
}

void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

int Time::getHour()
{
	return hours;
}

int Time::getMinute()
{
	return minutes;
}

int Time::getSecond()
{
	return seconds;
}

void Time::printTwelveHourFormat()
{
	if (hours >= 12)
	{
		if (hours == 12)
			std::cout << std::setfill('0') << std::setw(2) << hours << " : " << std::setw(2) << minutes << " : " << std::setw(2) << seconds << std::setfill(' ') << " PM\n";
		else
			std::cout << std::setfill('0') << std::setw(2) << hours - 12 << " : " << std::setw(2) << minutes << " : " << std::setw(2) << seconds << std::setfill(' ') << " PM\n";
	}
	else
	{
		if (hours == 0)
			std::cout << std::setfill('0') << std::setw(2) << "12" << " : " << std::setw(2) << minutes << " : " << std::setw(2) << seconds << std::setfill(' ') << " AM\n";
		else
			std::cout << std::setfill('0') << std::setw(2) << hours << " : " << std::setw(2) << minutes << " : " << std::setw(2) << seconds << std::setfill(' ') << " AM\n";
	}
}

void Time::printTwentyFourHourFormat()
{
	std::cout << std::setfill('0') << std::setw(2) << hours << " : " << std::setw(2) << minutes << " : " << std::setw(2) << seconds << std::setfill(' ') << '\n';
}

void Time::incSec(int inc)
{
	seconds += inc;
	if (seconds > 59)
	{
		incMin(seconds / 60);
		seconds %= 60;
	}
}

void Time::incMin(int inc)
{
	minutes += inc;
	if (minutes > 59)
	{
		incHour(minutes / 60);
		minutes %= 60;
	}
}

void Time::incHour(int inc)
{
	hours += inc;
	if (hours > 23)
	{
		hours %= 24;
	}
}