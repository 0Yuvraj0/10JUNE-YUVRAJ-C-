#include<stdio.h>
#include<conio.h>
void main()
{
	int Days,Week,Year,ch;
	clrscr();
	printf("Enter the number of Days to convert in into Week or Year=");
	scanf("%d",&Days);
	printf("\nPress 0 If you want to convert the days in to week.");
	printf("\nPress 1 if you want to convert the days in to year.");
	printf("\nPress 2 If you want to convert the days in to day.");
	Week=Days/7;
	Year=Days/365;
	printf("\nEter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 0:
		printf("Week=%d",Week);
		break;
		case 1:
		printf("Year=%d",Year);
		break;
		case 2:
		printf("Day=%d",Days);
		break;
		default:
		printf("\nPlease enter valid value.");
	 }
	 getch();
}




