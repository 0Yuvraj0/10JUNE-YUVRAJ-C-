#include<iostream>
using namespace std;
class cricket
{
	public:
	int a,b,c;
	public:
	   	cricket()
		{
			cout<<"------Chris------"<<endl;
			a=1432;
			b=98;
			c=67;
			cout<<endl<<"Total Runs:"<<a<<endl;
			cout<<endl<<"Total Wickets:"<<b<<endl;
			cout<<endl<<"Total Match:"<<c<<endl;
		}	
};
class run : public cricket
{
	public:
	  run()
{
	cout<<"Avg Run is:"<<a/c<<endl;
	cout<<"Avg Wicket is:"<<b/c<<endl;	
}
};
int main()
{
	run obj;	
	return 0;
}





