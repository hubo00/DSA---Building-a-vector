#include <iostream>
#include "myIntVector.h"


// Constructor for the myIntVector class
myIntVector::myIntVector() {
	std::cout << "In the vector Constructor...";
	int m_size;
	int m_capacity = 10;
	int* arrPtr = new int[m_capacity];

};

// Destructor for the myIntVector class
myIntVector::~myIntVector() {
	std::cout << "In the vector Destructor...";
	delete [] arrPtr;
	arrPtr = nullptr;
};

// size() method which returns the size of the vector
int myIntVector::size() {
	int count;
	for (int i = 0; i; i < m_capacity; i++) {
		if (arrPtr[i] != NULL) {
			count++;
		}
	}
	return count;
};

// push_back() method which takes a value as parameter and puts it at the back of the vector array
void myIntVector::push_back(int val) {
	int indexVal = size() + 1;
	if (indexVal < m_capacity) {
		arrPtr[indexVal] = val;
	}
	else {
		std::cout << "Array index out of bounds: Increase array size using size()" << std::endl;
	}
};

// capacity() method which returns the total capacity of the vector
int myIntVector::capacity() {
	return m_capacity;
};

// resize() method which takes a new size as a parameter and changes the vector to that size
void myIntVector::resize(int i) {
	int* newPtr = new int[i];
	if (i > m_capacity) {
		for (int index = 0; index < size(); index++) {
			newPtr[index] = arrPtr[index];
		}
	}
	else {
		for (int index = 0; index < i; index++) {
			newPtr[index] = arrPtr[index];
		}
	}
	delete[] arrPtr;
	arrPtr = newPtr;

	delete[] newPtr;
	newPtr = nullptr;
};

int myIntVector::at(int i) {

};