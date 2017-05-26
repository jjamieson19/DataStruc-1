#include "Circle.h"

Circle::Circle()
{
	radius = 0;
}

Circle::Circle(double rad)
{
	radius = rad;
}

double Circle::getArea()
{
	const double PI = 3.14159;
	double area = (radius*radius*PI);
	return area;
}

double Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(double rad)
{
	radius = rad;
}

Circle Circle::operator+(Circle circle2)
{
	return Circle((this->getRadius())+(circle2.getRadius()));
}
