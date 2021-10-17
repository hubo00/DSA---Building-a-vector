#pragma once

class myIntVector {
private:
	int m_size;
	int m_capacity;
	int *arrPtr;
public:
	void print(); // print method used for printing out contents of array ( FOR TESTING PURPOSES - WILL BE REMOVED FOR FINAL ITERATION )
	void push_back(int val);
	int size();
	int capacity();
	void resize(int i);
	myIntVector();
	~myIntVector();
	const int at(int i) const;
	//const myIntVector operator[](int i) const;
};