### Task - 2: Time
The Time ADT, which we discussed today in class. Remember to make data members private.

**Private Members:**
```cpp
int hours;
int minutes;
int seconds;
```

**Public Operations:**
```cpp
void setHour ( int h );
void setMinute ( int m );
void setSecond ( int s );
void setTime ( int h, int m, int s );
int getHour ( );
int getMinute ( );
int getSecond ( );
void incSec( int = 1 );
// increment in the second of the calling time object, default increment is 1.

void printTwelveHourFormat();
// print standard time

void printTwentyFourHourFormat();
// print universal time

void incMin( int = 1 );
// increment in the minute of the calling time object, default increment is 1.

void incHour( int = 1 );
// increment in the hour of the calling time object, default increment is 1.
```

**Input Validation:** All Time object should have values of hour >= 0 and <= 23. And minute and second in range >= 0 and <= 59.