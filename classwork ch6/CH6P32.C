#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],temp;
	int l=0,i;
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[l]!=0)
	{
		l++;
	}
	for(i=0;i<=(l-1)/2;i++)
	{
		temp=a[i];
		a[i]=a[l-1-i];
		a[l-1-i]=temp;
	}
	printf("Reversed string is:%s",a);
	getch();
}
