// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class List{
public:
	Node * head;
	Node * tail;
};

class Node {
	Node* prev;
	Node* next;
	int data;

	explicit Node(int initData) : prev(NULL), next(NULL), data (initData){

	}

	Node next(){
		return *next;
	}
	Node prev(){
		return *prev;
	}

	int data(){
		return data;
	}

};


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

