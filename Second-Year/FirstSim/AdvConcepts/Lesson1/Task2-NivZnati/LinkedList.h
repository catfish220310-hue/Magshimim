#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
    int value;
    Node* next;
} Node;

void insertAtFront(Node*& head, int newVal);
void deleteAtFront(Node*& head); 

#endif#
