#include<iostream>
using namespace std;
	char a[20],b[20];
	int c,d,e,f,g,h,i,j,k,l,m,n;
	float z;
	class account
{
	public:
		 int cd()
		{
			cout<<"Enter your name:"<<endl;
			cin>>a;
			cout<<"Plase Enter your Account Number:"<<endl;
			cin>>c;
			cout<<"Press 2 for Curreant Account and 1 for Saving Account"<<endl;
			return 0;
		}
};
class saving
{
	public:
		int s()
		{
			cout<<"Enter how much money you want to deposit:"<<endl;
			cin>>e;
			cout<<"Intreast Rate:5 Year=3.75%   10 Year=6%   25 Year=9%"<<endl;
			cout<<"Enter for how many years:"<<endl;
			cin>>f;
			if(f=5)
			{
				cout<<"Your Money has been deposited for 5 Yeras with Intreast rate of 3.75%."<<endl;
			}
			else if(f=10)
			{
				cout<<"Your Money has been Deposited for 10 Years with Intreast rate of 6%"<<endl;
			}
			else if(f=20)
			{
				cout<<"Your Money has been Deposited for 15 years with Intreast rate of 9%"<<endl;
			}
			else
			{
				cout<<"Please enter valid number of years.........."<<endl;
			}
			cout<<"Press 1 to check how much money you will get after years that you selected:"<<endl;
			if(f=5)
			{
				z=3.75;
			}
			else if(f=10)
			{
				z=6;
			}
			else if(f=15)
			{
				z=9;	
			} 
		
			cin>>g;
			if(g=1)
			{
				cout<<"Amount is="<<(e*f*z)/100<<endl;
			}
			return 0;
		} 		
};
class current
{
	public:
		int c()
		{
				cout<<"Please Enter how much amount you have to Deposit:"<<endl;
				cin>>h;
				cout<<"Press 1 for Withdraw and 2 for Debit"<<endl;
				cin>>i;
				switch(i)
				{
				case 1:
					cout<<"Enter how much amount you want to Withdraw:"<<endl;
					cin>>j;
					cout<<"You have successfully withdraw this amount:"<<j<<endl;
					cout<<"Press 1 for check balance."<<endl;
				break;
				case 2:
					cout<<"Enter how much amount you have to Debit:"<<endl;
					cin>>j;
					cout<<"You have successfully Debited this amount:"<<j<<endl;
					cout<<"Press 1 for check balance."<<endl;
				break;
				default:
					cout<<"Error...........";
				break;
				}
					cin>>k;
					if(k=1)
					{
						cout<<"Your current balance is="<<h-j<<endl;
					}
				else
				{
					cout<<"Please Enter the valid choice:"<<endl;
				}
				cout<<"Your minimum balance have sould be >500"<<endl;
				if(h-j<500)
				{
					cout<<"Your balance is less than 500 you have to pay panalty.";
				}
		}	
};
int main()
{
	account obj1;
	obj1.cd();
	cin>>d;
	switch(d)
	{
	case 2:
	
		current obj3;
		obj3.c();		 
	
	break;
	case 1:
	
		saving obj2;
		obj2.s();
	break;
	default:
	
		cout<<"Please enter valid choice......................"<<endl;
	break;
	}
	return 0;
}
