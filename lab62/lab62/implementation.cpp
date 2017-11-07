//implementation.cpp
//helpful YouTube video used for FIFO: https://www.youtube.com/watch?v=Tivs0ZjEgsw

#include "header.h"

FIFO::FIFO(){
	head = tail = NULL;
}

bool FIFO::isEmpty(){
	if (head == NULL)
		return true;
	
	return false;
}

void FIFO::enqueue(Node new_node){
	Node *addNode = new Node;
	addNode -> label = new_node.label;
	addNode -> next = NULL;
	
	if (isEmpty()){
		head = tail = addNode;
		return;
	}
	
	tail -> next = addNode;
	tail = addNode;
	return;
}

void FIFO::dequeue(Node * & getNode){
	if (isEmpty())
	{
		getNode -> label = "";
		return;
	}
	
	getNode -> label = head -> label;
	Node *aux = head;
	head = head -> next;
	aux -> next = NULL;
	delete aux;
	return;
}

void FIFO::getNode(Node * & getNode){
	if (isEmpty())
	{
		getNode -> label = "";
		return;
	}
	
	getNode -> label = head -> label;
	return;
}

void FIFO::print(){
	Node *aux = head;
	
	while (aux != NULL){
		cout << aux -> label << endl;
		aux = aux -> next;
	}
	
	return;
}
