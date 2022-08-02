#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
	int n,*p,i,j,temp;
	clrscr();
	printf("\nHow many number:");
	scanf("%d",&n);
	p=(int *)malloc(n*2);
	if(p==null)
	{
		printf("\nMemory alloaction unsuccessfull");
		exit();
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter Number %d:",i++);
		scanf("%d",p+i);
	}
	for(i=0;j<n;j++)
	{
		for(j=0;j<n;j++)
		{
		if(*(p+i)<*(p+i);
		{
			temp=*(p+i);
			*(p+i)=*(p+j);
			*(p+j)=temp;
		}
		}
	}
	printf("\nThe sorted numbers are:\n");
	for(i=0;i<n;i++)
		printf("%d",*(p+i));
	getch();
	}






