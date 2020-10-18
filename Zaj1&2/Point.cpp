#include "pch.h"
#include "Point.h"

Point::Point(int _x, int _y)
{
	x = _x;
	y = _y;
}

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(Point& point)
{
	x = point.x;
	y = point.y;
}

Point::~Point()
{

}

void Point::func(Point&)
{

}

void Point::read()
{
	std::cout << "x = " << x << "\ny = " << y << "\n";
}
