#include<stdio.h>
#include<conio.h>
void main()
{
 int Year;
 clrscr();
 printf("Enter the year=",Year);
 scanf("%d",&Year);
 if(Year%4==0)
 {
 printf("Yes,This year is leap year.");
 }
 else
 {
 printf("Sorry,The year you have entered is not a leap year.");
 }

  getch();

}