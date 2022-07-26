#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e[30];
	clrscr();
	printf("Enter the value of A=");
	scanf("%d",&d);
	printf("Enter the Numbers:");
	for(a=0;a<d;a++)

		scanf("%d",&e[a]);


	for(a=0;a<d;a++)
	{
	for(b=a+1;b<d;b++)
	{
	if(e[a]>e[b])
		{
			c=e[a];
			e[a]=e[b];
			e[b]=c;
		}
	}
	}
	printf("The Numbers=\n");
	for(a=0;a<d;a++)
	printf("%d\n",e[a]);
	getch();
}