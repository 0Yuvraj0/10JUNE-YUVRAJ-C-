#include<iostream>
using namespace std;
int principal,year;
float rate;
class si
{
	public:
		int si()
		{
			cout<<"Enter teh Principal Amount:";
			cin>>principal;
			cout<<"------------------------------------";
			cout<<"Enter teh rate:"<<endl;
			cin>>rate;
			cout<<"-------------------------------------";
			cout<<"Enter the Number of Years:"<<endl;
			cin>>year;
		}
};
int main
{
	si obj;
	cout<<"----------------------------------------------------";
	cout<<"Simple intrest is="<<(principal*rate*year)/100<<endl;
	return 0;	
}


