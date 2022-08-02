#include<stdio.h>
#include<conio.h>
void main()
{
	int r,payo,vedh,length,width,ch;
	float pi;
	int AreaofCircle;
	int AreaofTriangle;
	int AreaofRectangle;
	clrscr();
	pi=3.14;
	printf("Enter the value of r=",r);
	scanf("%d",&r);
	printf("Enter the value of payo=",payo);
	scanf("%d",&payo);
	printf("Enter the value of vedh=",vedh);
	scanf("%d",&vedh);
	printf("Enter the value of length=",length);
	scanf("%d",&length);
	printf("Enter the value of width=",width);
	scanf("%d",&width);
	AreaofCircle=pi*r*r;
	AreaofTriangle=0.5*payo*vedh;
	AreaofRectangle=length*width;
	printf("\nPress 1 to find Area of Circle");
	printf("\nPress 2 to find Area of Triangle");
	printf("\nPress 3 to find Area of Rectangle");
	printf("\nEnter your choise=",ch);
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("Area of Circle is=%d",AreaofCircle);
	break;
	case 2:
	printf("Area of Trinagle is=%d",AreaofTriangle);
	break;
	case 3:
	printf("Area of Rectangle is=%d",AreaofRectangle);
	break;
	default:
	printf("Enter valid choise");
	break;
	}
	getch();
}














