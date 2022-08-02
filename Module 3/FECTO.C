#include<stdio.h>
#include<conio.h>
long int facto(int a)
{
	if(a<=1)
	return 1;
	return a*facto(a-1);
}
void main()
{
	int a;
	clrscr();
	printf("Enter your number=");
	scanf("%d",&a);
	printf("%ld",facto(a));
	getch();
}