#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	clrscr();
	printf("Enter a string:");
	gets(a);
	strcpy(b,a);
	printf("Copied string is:%s",b);
	getch();
}
