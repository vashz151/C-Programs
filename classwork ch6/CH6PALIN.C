#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int x;
	clrscr();
	printf("Enter a string:");
	gets(a);
	strcpy(b,a);
	strrev(a);
	x=strcmp(a,b);
	if(x==0) printf("Its a palindrome");
	else printf("It's not a palindrome");
	x=strlen(a);
	printf("\nLength of string is:%d",x);
	getch();
}
