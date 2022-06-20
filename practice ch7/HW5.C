#include<stdio.h>
#include<conio.h>
void main()
{
	char *a;
	clrscr();
	a=(char *)malloc(100);
	printf("Enter a string:");
	gets(a);
	printf("String entered is %s",a);
	getch();

}