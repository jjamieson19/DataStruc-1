//JD Jamieson
//CS273
//Assignment #1: C++ review
//EX03: Templates/STL Vector
#include <iostream>
#include <vector>

using namespace std;
template<typename T>
//Convert the class to hold array of generic type T
class MyVec { 
private:
	T *newArray;
public:
	MyVec(int size)
	{
		newArray = new T[size];
	}
	~MyVec()
	{
		delete[] newArray;
	}
};

//Convert the swap function to work with any type
template<typename T>
T swap(T & A, T & B) {
	T tmp = A;
	A = B;
	B = tmp;
}

int main() {
	MyVec<double>Doubles(5); //Declare object of template class for doubles
	vector<char> characters; //Declare STL vector for chars
	for (int i = 0; i < 5; i++) //Use loop to assign value to vector
		characters.push_back('A');
	cout<<characters.size()<<endl; //STL Vector function to check size?
}
