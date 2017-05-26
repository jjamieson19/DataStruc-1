//JD Jamieson
//CS273
//Assignment #1: C++ review
//EX02: Classes
#include <iostream>
#include "Circle.h" //Declare a Circle class
using namespace std;

int main() {
	Circle myCircle1(); //Create a circle using default constructor
	Circle myCircle2(10); //Create circle using overloaded constructor
	Circle *ptr;
	ptr = new Circle(12); //Allocate memory for a circle using a pointer
	Circle circles[10]; //Declare an array of circles with default constructor
	for (int i = 0; i < 10; i++)
		circles[i] = Circle();
	for (int i = 0; i < 10; i++)
		(circles[i]).setRadius(15); //Set all radii in array to 15
	delete ptr;
}
