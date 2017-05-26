#ifndef CIRCLE_H_
#define CIRCLE_H_
#include <cmath>
class Circle {
private:
	double radius;
public:
	Circle();
	Circle(double rad);
	double getArea();
	double getRadius();
	void setRadius(double rad);
	Circle operator+(Circle circle2);
};
#endif
