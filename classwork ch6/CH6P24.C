#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	int l;
	clrscr();
	printf("Enter a string:");
	gets(a);
	l=strlen(a);
	printf("Length of entered string is:%d",l);
	getch();
}
