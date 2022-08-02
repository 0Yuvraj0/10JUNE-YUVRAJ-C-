#include<stdio.h>
#include<conio.h>
void main()
{
int p;
int r;
int n;
int Ans;
int ci;
clrscr();
printf("Enter the value of P= ",p);
scanf("%d",&p);
printf("Enter theb value of R=",r);
scanf("%d",&r);
printf("Enter the value of N=",n);
scanf("%d",n);
Ans=p*r*n/100;
ci=p*(1+r/100)*n-r;
printf("Ans=%d",Ans);
printf("\nCi=%d",ci);
getch();
}