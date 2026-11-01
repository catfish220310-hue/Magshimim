#include "Queue.h"
#include <iostream>

void initQueue(Queue* q, unsigned int size)
{
	q->queue = new int[size];
	q->qFirst = 0;
	q->qLast = 0;
	q->maxSize = size;
	q->count = 0;
}

void cleanQueue(Queue* q)
{
	delete[] q->queue;
	q->queue = nullptr;
	q->qFirst = 0;
	q->qLast = 0;
	q->maxSize = 0;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
		return;

	q->queue[q->qLast] = newValue;
	q->count++;
	q->qLast = (q->qLast + 1) % q->maxSize;
}

int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	if (isEmpty(q))
		return -1;

	int ret = q->queue[q->qFirst];
	q->count--;
	q->qFirst = (q->qFirst + 1) % q->maxSize;

	return ret;
}

bool isEmpty(Queue* s)
{
	return s->count == 0;
}

bool isFull(Queue* s)
{
	return s->count == s->maxSize;
}