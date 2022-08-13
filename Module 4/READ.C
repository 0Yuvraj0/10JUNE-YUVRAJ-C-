#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *a;
	char data[30];
	clrscr();
	a=fopen("write.txt","w");
	printf("Enter the data to print in file:");
	scanf("%s",&data);
	fprintf(a,"Data is:%s",&data);
	fclose(a);
	getch();
}
