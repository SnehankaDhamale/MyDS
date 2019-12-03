/*************************** CIRCULAR LL-Setter Getter **********************************/

#include<iostream>
#include<ostream>

using namespace std;
#ifndef _LIST__H_
#define _LIST__H_
#include "Node.h"

class List
{
	Node* head;//node type ptr 
	void deleteall();//delete all nodes
public:
	List();
	~List();
	List(int data);
	List(const List&);
	void operator=(const List&);
	
	void insert(int);
	void append(int);
	int count();
	void insertat(int,int);
	friend ostream& operator<<(ostream&,const List& );
	void delelast();
	void delefront();
	void delat(int);

};

#endif
