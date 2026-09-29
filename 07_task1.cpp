#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle shape1, shape2;

	shape1.setLength(45);
	shape1.setWidth(45);

	shape2.setLength(98);
	shape2.setWidth(-76);
	shape2.setWidth(64);

	if (shape1.isSquare())	cout << "Shape1 is a Square.";
	if (shape2.isSquare())	cout << "Shape2 is a Square.";

	return 0;
}