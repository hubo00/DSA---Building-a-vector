// Hubert Bukowski | x00161897
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
	int* tmpPtr;
	tmpPtr = new int[i];
	if (i > m_capacity) { // If the new vector size is larger than the current
		for (int index = 0; index < m_capacity; index++) {
			tmpPtr[index] = arrPtr[index];
		}

		// Re-populates the updated arrPtr 
		for (int index = 0; index < m_capacity; index++) {
			arrPtr[index] = tmpPtr[index];
		}
	}
	else { // If the new vector size is smaller than the current
		int newSize = 0;
		for (int index = 0; index < i; index++) {
			tmpPtr[index] = arrPtr[index];
		}
		// If the new passed capacity is greater than the current size, Loop until you reach m_size
		if (i >= m_size) {
			for (int index = 0; index < m_size; index++) {
				arrPtr[index] = tmpPtr[index];
				newSize++;
			}
		}
		// Else - if the new passed capacity is less than the current size, Loop until you reach i
		else {
			// Re-populates the updated arrPtr
			for (int index = 0; index < i; index++) {
				arrPtr[index] = tmpPtr[index];
				newSize++;
			}
		}
		// Assign new size to m_size
		m_size = newSize;
	}
	m_capacity = i;

	delete[] tmpPtr;
	tmpPtr = nullptr;
};

// at() method which returns the value at the passed index position - Not Constant, Allows for modifying the value
int& myIntVector::at(int i) {
	if (i > m_size || i < 0) {
		if (i > m_capacity) {
			std::cout << "Array index out of bounds - Increase vector size" << std::endl;
		}
		else {
			std::cout << "Index position " << i << " is empty" << std::endl;
		}
	}
	else {
		return arrPtr[i];
	}
}

// at() method which returns the value at the passed index position - Constant, Cannot be modified, used only for retrieving
const int& myIntVector::at(int i) const {
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

// Overloaded [] operator which returns the value at the passed index position - Not Constant, Allows for modifying the value
int& myIntVector::operator[](int i) {
	if (i > m_size || i < 0) {
		std::cout << "Array index out of bounds" << std::endl;
	}
	else {
		return arrPtr[i];
	}
}

// Overloaded [] operator which returns the value at the passed index position - Constant, Cannot be modified, used only for retrieving
const int& myIntVector::operator[](int i) const{
	if (i > m_size || i < 0) {
		std::cout << "Array index out of bounds" << std::endl;
		return -1;
	}
	else {
		return arrPtr[i];
	}
}