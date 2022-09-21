#include<iostream>
using namespace std;
class Ldetail
{
	public:
	char name[20],sub[20],course[20];
	int Lnumber,i,j;
	
	int detail()
	{
		for(i=0;i<6;i++)
		{
		cout<<"Enter the Lecturer's name:"<<endl;
		cin>>name;
		cout<<"Enter the name of the subject:"<<endl;
		cin>>sub;
		cout<<"Enter the detail of course:"<<endl;
		cin>>course;
		cout<<"Enter the number of Lecture:"<<endl;
		cin>>Lnumber;
		cout<<"-----------------------------------------------"<<endl; 
		}
	}
		int showD()	
		{
			cout<<name<<endl;
			cout<<sub<<endl;
			cout<<course<<endl;
			cout<<Lnumber;
			cout<<"--------------------------------------------------"<<endl;
				
		}
		
	
		
};

int main()
{
	int c;
	Ldetail obj;
	obj.detail();
	for(c=0;c<6;c++)
	{
	obj.showD();
	}
	return 0;
}
