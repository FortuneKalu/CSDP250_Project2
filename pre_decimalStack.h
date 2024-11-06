#pragma once
#ifndef PRE_DECIMALSTACK_H
#define PRE_DECIMALSTACK_H

#include <iostream>

using namespace std;

class BinaryStack {
private:
	struct StackNode {
		int value;
		StackNode* next;
	};
	StackNode* top;

public:
	BinaryStack();
	void push(int);
	int pop();
	bool isEmpty();
	~BinaryStack();
	void pileBinaryDigits(BinaryStack& stack, int num);
};

#endif