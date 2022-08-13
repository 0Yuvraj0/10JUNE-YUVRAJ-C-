#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *a;
	a=fopen("read.txt","w");
	char b[20];
	clrscr();
	fprintf(a,"Hello World");
	fclose(a);
	a=fopen("read.txt","r");
	fprintf(a,"%s");
	fscanf(a,"%s",&b);
	fclose(a);
	getch();

}