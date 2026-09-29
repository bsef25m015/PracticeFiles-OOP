#include <iostream>
#include "Rectangle.h"

void Rectangle::setLength(int num)
{
	if (num >= 0)
		length = num;
	else
		std::cout << "The Length cannot be Negative!\n";
}

void Rectangle::setWidth(int num)
{
	if (num >= 0)
		width = num;
	else
		std::cout << "The Width cannot be Negative!\n";
}

int Rectangle::getLength() const
{
	return length;
}

int Rectangle::getWidth() const
{
	return width;
}

bool Rectangle::isSquare() const
{
	return length == width;
}