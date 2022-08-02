#include<stdio.h>
#include<conio.h>
void mystrcopy(char str[30],char str1[30]);
int main()
{
	char str1[30],str2[30];
	int i;
	clrscr();
	printf("Enter string:\n");
	gets(str1);
	mystrcopy(str2,str1);
	printf("Copied string is:%s",str2);
	return 0;
}
void mystrcopy(char str2[30],char str1[30])
{
int i;
for(i=0;str1[i]!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
getch();
}