#include "stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	Node* top = new Node;	
	top->value = element;
	top->next = s->top;
	s->top = top;
}	

int pop(Stack* s) // Return -1 if stack is empty
{
	if (isEmpty(s))
		return -1;

	int res = s->top->value;
	Node *tmp = s->top;
	
	s->top = s->top->next;

	delete tmp;

	return res;
}

void initStack(Stack* s)
{
	s->top = nullptr;
}

void cleanStack(Stack* s)
{
	while (!isEmpty(s))
	{
		pop(s);
	}
}

bool isEmpty(Stack* s)
{
	return s->top == nullptr;
}