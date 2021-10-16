#include <iostream>
#include "myIntVector.h"


// Constructor for the myIntVector class
myIntVector::myIntVector() {
	std::cout << "In the vector Constructor..." << std::endl;
	m_size = 0;
	m_capacity = 10;
	arrPtr = new int[m_capacity];
};

// Destructor for the myIntVector class
myIntVector::~myIntVector() {
	std::cout << "In the vector Destructor..." << std::endl;
	delete [] arrPtr;
	arrPtr = nullptr;
};

// size() method which returns the size of the vector
int myIntVector::size() {
	return m_size;
};

// capacity() method which returns the total capacity of the vector
int myIntVector::capacity() {
	return m_capacity;
};

// push_back() method which takes a value as parameter and puts it at the back of the vector array
void myIntVector::push_back(int val) {
	if (m_size < m_capacity) {
		arrPtr[m_size] = val;
		m_size++;
	}
	else {
		std::cout << "Array index out of bounds: Increase array size using size()" << std::endl;
	}
};

// resize() method which takes a new size as a parameter and changes the vector to that size
void myIntVector::resize(int i) {
	int* newPtr;
	newPtr = new int[i];
	if (i > m_capacity) { // If the new vector size is larger than the current
		for (int index = 0; index < m_capacity; index++) {
			newPtr[index] = arrPtr[index];
		}
	}
	else { // If the new vector size is smaller than the current
		for (int index = 0; index < i; index++) {
			newPtr[index] = arrPtr[index];
		}
	}
	m_capacity = i;
	delete[] arrPtr;
	arrPtr = newPtr;

	delete[] newPtr;
	newPtr = nullptr;
};

const int myIntVector::at(int i) const {
	if (i > m_size || i < 0) {
		std::cout << "Array index out of bounds" << std::endl;
		return -1;
	}
	else {
		return arrPtr[i];
	}
};

// print() method used for testing the vector ( WONT BE INCLUDED IN FINAL PROGRAM )
void myIntVector::print() {
	for (int i = 0; i < m_size; i++) {
		std::cout << arrPtr[i] << std::endl;
	}
}
/*---------------------*/

// Overloaded [] operator
//const int myIntVector::operator[](int i) const {
//
//}