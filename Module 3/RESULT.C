#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

	char a[10];
	char b[10];
	char c[10];
	int a1,b1,c1,a2,b2,c2,x,y,z;
	clrscr();
	printf("Enter the Three Name:");
	scanf("%s %s %s",&a,&b,&c);
	printf("Enter the Marks of First name:");
	scanf("%d %d",&a1,&a2);
	x=a1+a2;
	printf("Enter the Marks of second name:");
	scanf("%d %d",&b1,&b2);
	y=b1+b2;
	printf("Enter the Marks of third Name:");
	scanf("%d %d",&c1,&c2);
	z=c1+c2;
	printf("\n|----------------------------------|");
	printf("\n|Name\t|Sub1\t|Sub2|\t      Total|");
	printf("\n|----------------------------------|");
	printf("\n|%s\t|%d\t|%d|\t\t%d|",a,a1,a2,x);
	printf("\n|----------------------------------|");
	printf("\n|%s\t|%d\t|%d|\t\t%d|",b,b1,b2,y);
	printf("\n|----------------------------------|");
	printf("\n|%s\t|%d\t|%d|\t\t%d|",c,c1,c2,z);
	printf("\n|----------------------------------|");
	getch();
}



