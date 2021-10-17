// Hubert Bukowski | x00161897
#pragma once

class myIntVector {
private:
	int m_size;
	int m_capacity;
	int *arrPtr;
public:
	void push_back(int val);
	int size();
	int capacity();
	void resize(int i);
	myIntVector();
	~myIntVector();
	int& at(int i);
	const int& at(int i) const;
	int& operator[](int i);
	const int& operator[](int i) const;
};