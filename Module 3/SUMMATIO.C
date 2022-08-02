#include<stdio.h>
#include<conio.h>
	int main()
{
	//input 123 ---------->1+2+3=6
	int n,sum=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
while(n>0)
    {
	 sum+=n%10;
	 n=n/10;
     }
     printf("sum of digits:%d",sum);
  getch();
}