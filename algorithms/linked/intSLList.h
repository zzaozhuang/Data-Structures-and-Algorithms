// singly-linked list class to store intergers

# pragma once
#include "stdafx.h"

class IntSLLNode
{
public:
	IntSLLNode() { next = NULL; }

	IntSLLNode(int el, IntSLLNode *ptr = NULL)
	{
		info = el;
		next = ptr;
	}

	int info;
	IntSLLNode *next;
};

class IntSLList
{
public:
	IntSLList()
	{
		head = tail = 0;
	}

	~IntSLList();

	bool isEmpty()
	{
		return head == 0;
	}
	void addToHead(int);
	void addToTail(int);
	int* deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;

private:
	IntSLLNode *head, *tail;
};