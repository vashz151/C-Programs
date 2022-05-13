#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	clrscr();
	printf("Enter a string:");
	gets(a);
	strrev(a);
	printf("Reversed string is:%s",a);
	getch();
}
