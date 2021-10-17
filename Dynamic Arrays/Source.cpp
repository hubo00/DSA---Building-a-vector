#include <iostream>
#include "myIntVector.h"


int main() {
	myIntVector v;
	v.push_back(5);
	std::cout << "Size: " << v.size() << std::endl;
	std::cout << "Capacity: " << v.capacity() << std::endl;
	return 0;
}