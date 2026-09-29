#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
	unsigned int length, width;
public:
	void setLength(int num);
	void setWidth(int num);
	int getLength() const;
	int getWidth() const;
	bool isSquare() const;
};

#endif