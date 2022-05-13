#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int x;
	clrscr();
	printf("Enter two strings:");
	gets(a);
	gets(b);
	x=strcmp(a,b);
	if(x==0) printf("The two strings are eqqual");
	else if(x<0) printf("Greater string is:%s",b);
	else printf("Greater string is: %s",a);
	getch();
}
