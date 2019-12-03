
/*************************** CIRCULAR LL-Setter Getter **********************************/
#include"List.h"
#include <iostream>
#include <ostream>
using namespace std; 
List::List()
{
	head=NULL;//bydefault head points NULL
}
List::~List()
{
	//deleteall();
	cout<<"List:~List"<<endl;
}
List::List(int data)
{
	Node *temp=new Node(data);//create node 
	head=temp;//assg newly created node to head	
}
List::List(const List& x)
{
	this->head=NULL;//flush previous elements in LL
	Node* it=x.head;//pass head to it
	
	do
	{
		this->append(it->getData()); //this->data=x.data..private mem so getter()..
				
		it=it->getNext();
	}while(it!=x.head);
}
void List::operator=(const List& x)
{
	this->deleteall();
	this->head=NULL;//flush previous elements in LL
	Node* it=x.head;//pass head to it
	
	do
	{
		this->append(it->getData()); //this->data=x.data..private mem so getter()..
				
		it=it->getNext();
	}while(it!=x.head);
}

void List::deleteall()
{
	while(head != NULL)
	{
		delelast();
	}
}
void List:: insert(int data)//insert at front
{	//minimized code
	Node *tmp = new Node(data,NULL);//use of Node's Parameterised constructor
	tmp->setNext(NULL);
	if(head==NULL)
	{
		head=tmp;
		tmp->setNext(head);
		return;		
	}
	//Node *tmp = new Node(data,NULL);
	tmp->setNext(head);
	Node* it=head;
	do
	{
		it=it->getNext();
	}while(it->getNext()!=head);
	it->setNext(tmp);
	head=tmp;
		
}


void List::append(int data)//insert at last
{
	Node *tmp = new Node(data,head);//use of Node's Parameterised constructor
	//tmp->setNext(NULL);
	if(head==NULL)
	{
		head=tmp;
		tmp->setNext(head);
		return;		
	}
	//Node *tmp = new Node(data,NULL);


	Node* it=head;	
	do
	{
		it=it->getNext();

	}while(it->getNext()!=head);

		it->setNext(tmp);
		tmp->setNext(head);	
	

		
}

ostream& operator<<(ostream& out,const List& x)
{
	//empty???
	if(x.head == NULL)
	{
		out<<"LL is empty...\n"<<endl;
		return out;
	}

	//go to last node...
	Node *it=x.head;
	do
	{
		out<<it->getData()<<"-->";
		it=it->getNext();
		
	}while(it!= x.head);
	return out;
}
void List:: delefront()//delete first element
{
	if(head != NULL)
	{
		if(head==head->getNext())
		{
			Node *tmp=head;
			head=NULL;
			delete tmp;	
		}
		//else with swapping
		int temp=head->getData();
		head->setData(head->getNext()->getData());
		head->getNext()->setData(temp);

		Node *tmp=head->getNext();
		head->setNext(tmp->getNext());
		delete tmp;
		
		
	}
	
	
}

void List::delelast()//del last element
{
	if(head != NULL)
	{
		//only one node in LL??
		if(head->getNext() == NULL)
		{
			Node *tmp=head;
			head=NULL;
			delete tmp;
		}
		//  we have more than 1 node
		else
		{
			// TRAVEL UPTO POS-1 LOCATION..
			Node *it=head;
			do
			{
				it=it->getNext();
			}while(it->getNext()->getNext() != head);
			Node *tmp =it->getNext();
			it->setNext(tmp->getNext());
			delete tmp;
		}
	}

}
int List:: count()
{
	int c=0;
	Node *it=head;
	do
	{
		c++;	
		it=it->getNext();
		
	}while(it!=head);
	return c;
}
void List::insertat(int data,int pos)
{
	int i=count();
	
	if(pos<1 || pos>i+1)
	{
		cout<<"Invalid Position"<<endl;
	}
	else if(pos==1)
	{
		insert(data);
	}
	else if(pos==i+1)
	{
		append(data);
	}
	else
	{
	 	Node *temp=new Node(data,NULL);
		Node *it=head;
		int x=1;
		while(x!=pos-1)
		{
			it=it->getNext();
			x++;

		
		}
		temp->setNext(it->getNext());
		it->setNext(temp);

	}
	
}

void List::delat(int pos)
{
int i=count();
	
	if(pos<1 || pos>i+1)
	{
		cout<<"Invalid Position"<<endl;
	}
	else if(pos==1)
	{
		delefront();
	}
	else if(pos==i+1)
	{
		delelast();
	}
	else
	{
		
		Node *it=head;
		int x=1;
		while(x!=pos-1)
		{
			it=it->getNext();
			x++;
		}
		Node * temp;
		temp=it->getNext();
		it->setNext(temp->getNext());
		delete temp;
		 

	}
}
