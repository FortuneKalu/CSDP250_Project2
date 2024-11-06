#pragma once
#ifndef POST_DECIMALSTACK_H
#define POST_DECIMALSTACK_H

#include<iostream>

using namespace std;

class BinaryQueue {
private:
	struct QueueNode {
		int value;
		QueueNode* next;
	};
	QueueNode* front;
	QueueNode* rear;

public:
	BinaryQueue();
	void enqueue(int);
	int dequeue();
	bool isEmpty();
	~BinaryQueue();
	void afterDecimalQueue(BinaryQueue &, double, int);
};


#endif