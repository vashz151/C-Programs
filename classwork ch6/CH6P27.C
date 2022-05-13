#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	clrscr();
	printf("Enter a string:");
	gets(a);
	printf("Enter another string:");
	gets(b);
	strcat(a," ");
	strcat(a,b);
	printf("Concatenated string is:%s",a);
	getch();
}
