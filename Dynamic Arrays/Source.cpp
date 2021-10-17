// Hubert Bukowski | x00161897
#include <iostream>
#include "myIntVector.h"


int main() {
	// Initialise myIntVector v
	myIntVector v;
	
	// Test vector at default size
	v.push_back(5);
	v.push_back(2);
	v.push_back(9);
	std::cout << "Size: " << v.size() << std::endl; // Size: 3
	std::cout << "Capacity: " << v.capacity() << std::endl; // Capacity: 10
	std::cout << "Value at index " << 1 << " = " << v.at(1) << std::endl; // Value at index 1 = 2
	std::cout << "Value at index " << 2 << " = " << v[2] << std::endl; // Value at index 2 = 9
	v[1] = 20;
	v.at(2) = 10;
	std::cout << "Value at index " << 1 << " = " << v.at(1) << std::endl; // Value at index 1 = 20
	std::cout << "Value at index " << 2 << " = " << v[2] << std::endl; // Value at index 2 = 10

	// Resize vector to smaller size and test
	v.resize(5);
	v.push_back(420);
	std::cout << "Size: " << v.size() << std::endl; // Size: 4
	std::cout << "Capacity: " << v.capacity() << std::endl; // Capacity: 5
	v.push_back(1);
	v.push_back(2); // Array index out of bounds - Vector too small
	std::cout << "Size: " << v.size() << std::endl; // Size: 5
	std::cout << "Capacity: " << v.capacity() << std::endl; // Capacity: 5
	std::cout << "Value at index " << 0 << " = " << v.at(0) << std::endl; // Value at index 0 = 5
	std::cout << "Value at index " << 4 << " = " << v[4] << std::endl; // Value at index 4 = 1

	// Resize vector to larger size and test
	v.resize(15);
	v.push_back(200);
	std::cout << "Size: " << v.size() << std::endl; // Size: 6
	std::cout << "Capacity: " << v.capacity() << std::endl; // Capacity: 15
	v.push_back(10);
	std::cout << "Size: " << v.size() << std::endl; // Size: 7
	std::cout << "Capacity: " << v.capacity() << std::endl; // Capacity: 15
	v.at(7) = 1000;
	v[6] = 1500;
	std::cout << "Value at index " << 7 << " = " << v.at(7) << std::endl; // Value at index 7 = 1000
	std::cout << "Value at index " << 6 << " = " << v[6] << std::endl; // Value at index 6 = 1500

	// Loop through whole vector, printing out each value using overloaded [] operator
	for (int i = 0; i <= v.size(); i++) {
		std::cout << v[i] << std::endl;
	}

	// Resize vector to smaller size than the amount of elements inside
	v.resize(3);
	std::cout << "Size: " << v.size() << std::endl; // Size: 3
	std::cout << "Capacity: " << v.capacity() << std::endl; // Capacity: 3

	// Loop through whole vector, printing out each value using overloaded [] operator
	for (int i = 0; i <= v.size(); i++) {
		std::cout << v[i] << std::endl;
	}

	return 0;
};