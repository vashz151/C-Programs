#include<stdio.h>
#include<conio.h>
void strcopy(char b[100],char a[100])
{
	int i,l=0;
	while(a[l]!=0)
	{
		b[l]=a[l];
		l++;
	}
	b[l]=0;
}
void strconcat(char a[100],char b[100])
{
	int i,l=0;
	while(a[l]!=0)
	{
		l++;
	}
	for(i=0;b[i]!=0;i++)
	{
		a[l+i]=b[i];
	}
	a[l+i]=0;

}
void main()
{
	char a[100],b[100];
	clrscr();
	printf("Enter a string:");
	gets(a);
	strcopy(b,a);
	printf("Copied string is:%s",b);
	printf("\nEnter string to join:");
	gets(b);
	strconcat(a,b);
	printf("Joined string is:%s",a);
	getch();
}
