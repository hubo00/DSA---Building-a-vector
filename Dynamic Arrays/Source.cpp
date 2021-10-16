#include <iostream>
#include "myIntVector.h"


int main() {
	myIntVector v;
	std::cout << "Size: " << v.size() << std::endl;
	std::cout << "Capacity: " << v.capacity() << std::endl;
	v.push_back(5);
	v.push_back(3);
	v.push_back(15);
	std::cout << "Size: " << v.size() << std::endl;
	v.push_back(59);
	v.push_back(4);
	v.push_back(2);
	std::cout << "Size: " << v.size() << std::endl;
	v.push_back(9);
	v.push_back(2);
	v.push_back(1);
	std::cout << "Size: " << v.size() << std::endl;
	v.push_back(7);
	v.push_back(25);
	v.resize(15);
	std::cout << "Capacity: " << v.capacity() << std::endl;
	v.push_back(25);
	v.push_back(29);
	v.push_back(303);
	std::cout << "Size: " << v.size() << std::endl;
	v.print();
	return 0;
}