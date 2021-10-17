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
	delete[] arrPtr;
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
		std::cout << "Array index out of bounds: Increase array size using .resize()" << std::endl;
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

		// Assign new values to arrPtr
		for (int index = 0; index < m_capacity; index++) {
			arrPtr[index] = newPtr[index];
		}
	}
	else { // If the new vector size is smaller than the current
		int newSize = 0;
		for (int index = 0; index < i; index++) {
			newPtr[index] = arrPtr[index];
		}

		// If the new passed capacity is greater than the current size, Loop until you reach m_size
		if (i >= m_size) {
			for (int index = 0; index < m_size; index++) {
				arrPtr[index] = newPtr[index];
				newSize++;
			}
		}
		// If the new passed capacity is less than the current size, Loop until you reach i
		else {
			for (int index = 0; index < i; index++) {
				arrPtr[index] = newPtr[index];
				newSize++;
			}
		}
		// Assign new values to arrPtr
		m_size = newSize;
	}
	m_capacity = i;

	delete[] newPtr;
	newPtr = nullptr;
};

// at() method which returns the value at the passed index position
const int myIntVector::at(int i) const {
	if (i > m_size || i < 0) {
		if (i > m_capacity) {
			std::cout << "Array index out of bounds - Increase vector size" << std::endl;
		}
		else {
			std::cout << "Index position " << i << " is empty" << std::endl;
		}
		return -1;
	}
	else {
		return arrPtr[i];
	}
};

// print method used for printing out contents of array ( FOR TESTING PURPOSES - WILL BE REMOVED FOR FINAL ITERATION )
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