//JD Jamieson
//CS273
//Assignment #1: C++ review
//EX01: Pointers
#include <iostream>
using namespace std;
int *doubleCapacity(int* list, int size);

int main() {
	//Write the C++ declaration for a pointer variable that can store the address of a double variable
	double * ptr = NULL; 
	//Use the C++ new operator to dynamically allocate memory for a double variable. Store the address in the pointer variable
	ptr = new double; 
	//Assign the value 4.12 to the pointer address.
	*ptr = 4.12;
	//Release the information stored in the pointer.
	cout << *ptr << endl;
	delete ptr;
	//What is wrong with the code (char *variable ; variable = 3;)?
	//Variable is set to store the address of char value. 3 is an int value.
	//Also, variable is a pointer. To access the information at variable, *variable must be used.
	//What operator is used to access memory address?
	int myVar = 0;
	cout << &myVar << endl; //& operator
	//Dynamically allocate array of 10 int values
	int * vals[10];
	for (int i = 0; i < 10; i++)
		vals[i] =new int(0);
	//Set all values in array to 42 using pointer arithmetic
	for (int i = 0; i < 10; i++)
		**(vals + i) = 42;
	//Release the memory allocated for the array
	for (int i = 0; i < 10; i++)
		cout << *vals[i] << endl;
	delete[] *vals;
	//Double the size of an array
	const int size = 5;
	int list[size];
	for (int i = 0; i < size; i++)
	{
		list[i] = (i+1);
	}	
	for (int i = 0; i < (size*2); i++)
		cout << *(doubleCapacity(list, size) + i) << endl;
	return 0;
}

int * doubleCapacity(int * list, int size)
{
	const int newSize = (size * 2);
	int * newList = new int[newSize];
	for (int i = 0; i < newSize; i++)
	{
		if (i < size)
			newList[i] = list[i];
		else
			newList[i] = 0;
	}
	list = newList;
	return list;
}