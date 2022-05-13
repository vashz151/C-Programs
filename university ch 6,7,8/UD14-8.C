#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0;
	char a[100],b[100];
	void copy (char a[], char *p, int );
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[n]!='\0')
	{
		n++;
	}
	copy(a,&b,n);
	printf("New string after copy is:%s\n",b);
	getch();
}
void copy (char a[], char *p, int n)
{
	int i;
	for(i=0;i<=n;i++)
	{
		*(p+i)=a[i];
	}
}

