// List.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class List{
private:
	struct Node{
		public:
			Node* prev;
			Node* next;
			int data;
			explicit Node(int initData, Node * n = NULL, Node* p = NULL) : next(n), prev(p), data (initData) {}
	};
	Node * head;
	Node * tail;
	int size;
	
public:
	
	explicit List () : head(NULL), tail(NULL), size(0){
	}
	int size(){
		return size;
	}

	/*********
	*Node Add method.
	*Uses Tail to add to the end of the list.
	*First case tests if list is empty, allocates data for new head and sets the tail to be the same
	*if head is the tail, there is only 1 element. make tail the new head -> next.
	*Other than that, add new element to end of list, and have the tail->next point to this element
	***********/
	void add(int data){ 
		if(head == NULL){
			head = new Node(data, NULL, NULL);
			tail = head;
		} else 
		if(head == tail){
			tail = new Node(data,NULL,head);
			head->next = tail;
		} else {
			tail->next = new  Node(data, NULL, tail);
		}
		size++;
	}

};



int _tmain(int argc, _TCHAR* argv[])
{
	
}

