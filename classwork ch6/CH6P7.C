#include<stdio.h>
#include<conio.h>
int largest(int a[100],int n)
{
	int i,large;
	large=a[0];
	for(i=1;i<=n-1;i++)
	{
		if(a[i]>large) large=a[i];
	}
	return large;
}
void main()
{
	int n,a[100],large,i;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	large=largest(a,n);
	printf("Largest Number:%d",large);
	getch();
}
