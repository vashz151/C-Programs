#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int l=0;
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[l]!='\0')
	{
		l++;
	}
	printf("Length of string is:%d",l);
	getch();
}
