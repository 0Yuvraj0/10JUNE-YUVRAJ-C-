#include<stdio.h>
int main()
{
	float a,b;
	char choice;
	do
	{
	printf("\nEnter any numbers");
	scanf("%f %f",&a,&b);
	printf("\nEnter the choice:");
	scanf("%s",&choice);
	switch(choice)
	{
		case'+':
			printf("Sum is %f+%f =\t%f",a,b,a+b);
			break;
		case'-':
			printf("Sum is %f-%f =\t%f",a,b,a-b);
			break;
		case'*':
			printf("Sum is %f*%f =\t%f",a,b,a*b);
			break;
		case'/':
			printf("Sum is %f/%f =\t%f",a,b,a/b);
			break;
	    case 1:
		break; 
		default:
			printf("Enter valid choice........");
			break;
        }
    }
        while(choice!=1);
        return 0;
}
