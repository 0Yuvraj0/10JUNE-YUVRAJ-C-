#include<stdio.h>
#include<conio.h>
typedef struct
{
	char name[30];
	int id;
	double salary;
}employee;
void main()
{
	int n=2;
	int i;
	employee employees[n];
	clrscr();
	printf("Enter %d Employee Detail:");
	for(i=0;i<n;i++)
	{
		printf("Name:");
		scanf("%s",employees[i].name);
		printf("Id:");
		scanf("%d",&employees[i].id);
		printf("Salary:");
		printf("%lf",&employees[i].salary);
		char ch=getchar();
		printf("\n");
	}
	printf("---------------All Emplopyees Details--------------------");
	for(i=0;i<n;i++)
	printf("Name\t");
	printf("%s \n,employees",employees[i].name);
	printf("Id\t");
	printf("%d\n",employees[i].salary);
	printf("Salary\t");
	printf("%lf\n",employees[i].salary);
	printf("\n");
	getch();
	}







