#pragma once

class myIntVector {
private:
	int m_size;
	int m_capacity;
	int *arrPtr;
public:
	// print() method used for testing the vector ( WONT BE INCLUDED IN FINAL PROGRAM )
	void print();
	void push_back(int val);
	int size();
	int capacity();
	void resize(int i);
	myIntVector();
	~myIntVector();
	const int at(int i) const;
	//const myIntVector operator[](int i) const;
};