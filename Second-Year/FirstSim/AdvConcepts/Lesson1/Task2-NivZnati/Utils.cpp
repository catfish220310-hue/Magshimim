#include "Utils.h"
#include "Stack.h"
#include <iostream>


void reverse(int* nums, unsigned int size)
{
	Stack s;
	initStack(&s);

	for (unsigned int i = 0; i < size; i++)
	{
		push(&s, nums[i]);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		nums[i] = pop(&s);
	}
}

int* reverse10()
{
	int *arr = new int[10];

	for (int i = 0; i < 10; i++)
	{
		std::cin >> arr[i];
	}

	reverse(arr, 10);
	return arr;
}