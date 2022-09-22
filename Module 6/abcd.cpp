#include<iostream>
using namespace std;
char a[20];
int c,d,e;
class dad
{
public:
	dad()	
	{
		cout<<"Enter the Name:"<<endl;
		cin>>a;
		cout<<"Enter the age:"<<endl;
		cin>>c;			
	}
};
class mom
{
public:
	mom()
	{
		cout<<"Enter the percentage:"<<endl;
		cin>>d;
	}		
};
class child: public dad, public mom {};
{
	public:
	child()
	{
		cout<<"Enter the salary:"<<endl;
		cin>>e; 
	}
};
class show
{
public:
	show()
	{
		cout<<"Name:"<<a<<endl;
		cout<<"Percentage:"<<d<<endl;
		cout<<"Salary:"<<e<<endl;
		cout<<"Age:"<<c<<endl;	
	}
};
int main()
{
	int z;
	child obj;
	cout<<"Press 1 to show details:"<<
	cin<<z;
	if(z=1)
	{
		show obj1;
	}
	return 0;
}





