#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,b,c=0;
	clrscr();
	printf("Enter any number=");
	scanf("%ld",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("Reverse order is=%ld",c);
	getch();
}