/*************************** CIRCULAR LL-Setter Getter **********************************/
#include<iostream>
#include<ostream>
using namespace std;
#ifndef _NODE__H_
#define _NODE__H_
class Node
{
	int data;
	Node *next; 
public:
	Node();
	~Node();
	Node(int);
	Node(int data,Node*);
	
	Node* getNext();//getter for accessing private members of class
	void setNext(Node*);
	int getData();
	void setData(int);


};

#endif
