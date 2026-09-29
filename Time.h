#ifndef TIME_H
#define TIME_H

class Time
{
private:
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
public:
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);
	void setTime(int h, int m, int s);
	int getHour();
	int getMinute();
	int getSecond();
	void printTwelveHourFormat();
	void printTwentyFourHourFormat();
	void incSec(int inc = 1);
	void incMin(int inc = 1);
	void incHour(int inc = 1);
};

#endif