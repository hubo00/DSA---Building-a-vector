#pragma once

class myIntVector {
private:
	int m_size;
	int m_capacity;
	int* arrPtr;
public:
	void push_back(int val);
	int size();
	int capacity();
	void resize(int i);
	myIntVector();
	~myIntVector();
	int at(int i);
	int at(const int i);
	int operator[];
};