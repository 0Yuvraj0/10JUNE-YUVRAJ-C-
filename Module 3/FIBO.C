#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d=1,e;
	clrscr();
	e=c+d;
	printf("Enter the Number:");
	scanf("%d",&b);
	printf("Fibonacci series:\n%d\n%d",c,d);
	for(a=3;a<=b;a++)
	{
		printf("\n%d",e);
		c=d;
		d=e;
		e=c+d;
	}
	getch();
}