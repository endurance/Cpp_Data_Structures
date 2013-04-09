// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class List{
private:
	Node * head;
	Node * tail;
	int size;
	struct Node{
		public:
			Node* prev;
			Node* next;
			int data;
			explicit Node(int initData, Node * p = NULL, Node* n = NULL) : prev(p), next(n), data (initData) {}
	};
public:
	
	explicit List () : head(NULL), tail(NULL), size(0){
	}
	int size(){
		return size;
	}
	void add(int data){ //adds to end of list every time
		if(head == NULL){
			head = new Node(data, NULL, NULL);
			tail = head;
			size++;
		} else {
			if(head->next== tail){

			}
		}
	}

};

class Node {

};


int _tmain(int argc, _TCHAR* argv[])
{
	
}

