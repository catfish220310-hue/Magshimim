#include "LinkedList.h"
#include <iostream>

void insertAtFront(Node*& head, int newVal)
{
	Node *newHead = new Node;
	newHead->next = head;
	newHead->value = newVal;
	head = newHead;
}

void deleteAtFront(Node*& head)
{
	if (head == nullptr) 
		return;

	Node *temp = head;
	head = head->next;
	delete temp;
}
