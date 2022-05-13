#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],b[100],temp;
	int l=0,i;
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[l]!=0)
	{
		l++;
	}
	for(i=0;i<=l;i++)
	{
		b[i]=a[i];
	}
	for(i=0;i<=(l-1)/2;i++)
	{
		temp=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=temp;
	}
	for(i=0;i<=l-1;i++)
	{
		if(a[i]!=b[i]) break;
	}
	if(i==l) printf("Palindrome");
	else printf("Not a palindrome");
	getch();
}
