#include <iostream>
#include "myIntVector.h"


int main() {
	myIntVector v;
	v.push_back(5);
	std::cout << "Size: " << v.size() << std::endl;
	std::cout << "Capacity: " << v.capacity() << std::endl;
	v.print();
	v.resize(4);
	v.push_back(6);
	std::cout << "Size: " << v.size() << std::endl;
	std::cout << "Capacity: " << v.capacity() << std::endl;
	v.print();
	v.push_back(6);
	v.push_back(6);
	v.push_back(6);
	std::cout << "Size: " << v.size() << std::endl;
	std::cout << "Capacity: " << v.capacity() << std::endl;
	v.print();
	return 0;
}