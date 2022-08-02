#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	double ar[100];
	clrscr();
	printf("Enter the number(1 to 100):");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number %d=",i++);
		scanf("%lf",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
	if(ar[0]<ar[i])
	{
		ar[0]=ar[i];
	}
	}
	printf("Largest element is=%.2lf",ar[0]);
	getch();
	}


