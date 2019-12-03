/*************************** CIRCULAR LL-Setter Getter **********************************/	
#include"Node.h"
#include <iostream>
using namespace std;
Node::Node()
{
	data=00;
	next=NULL;
	
}
Node::~Node()
{
	next=NULL;//set next to NULL
}

Node::Node(int d)//when pass data
{
	this->data=d;
	this->next=NULL;	
}

Node::Node(int d, Node* ptr)
{
	this->data=d;
	this->next=ptr;	//points to next node
}

Node *Node::getNext()//getter for accessing private members of class
{
	return next;
}

void Node::setNext(Node* p)
{
	next=p;
}
int Node:: getData()
{
	return data;
}
void Node::setData(int d)
{
	data=d;
}

