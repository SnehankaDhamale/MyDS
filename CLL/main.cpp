/*************************** CIRCULAR LL-Setter Getter **********************************/
#include"List.h"
#include"Node.h"
#include <iostream>
using namespace std; 
int main()
{

	List l,a3;
	l.insert(10);
	l.insert(20);
	l.insert(30);
	l.insert(40);
	l.insert(50);
	l.insert(60);
	cout<<l<<endl;
	
	l.append(1001);
	cout<<l<<endl;;
	
	l.delelast();
	cout<<l<<endl;
	l.delefront();
	cout<<l<<endl;
	cout<<"Count="<<l.count()<<endl;

	l.insertat(86,3);
	cout<<l<<endl;
	cout<<"Count="<<l.count()<<endl;
	
	l.delat(3);
	cout<<l<<endl;
	cout<<"Count="<<l.count()<<endl;
	
	List a2(l);
	cout<<"copy constructor:"<<a2<<endl;

	a3=a2;
	cout<<"Assg:"<<a3<<endl;



return 0;
}
