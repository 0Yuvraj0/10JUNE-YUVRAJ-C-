#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r;
	r=5;
	clrscr();
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=r;j++)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf(" *");
	}
	printf("\n");
	r--;
	}
	getch();
}
