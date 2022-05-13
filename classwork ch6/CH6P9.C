#include<stdio.h>
#include<conio.h>
void reverse(int a[100],int n)
{
	int b[100],i;
	for(i=0;i<=n-1;i++)
	{
		b[n-1-i]=a[i];
	}
	printf("Reverse array:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",b[i]);
	}
}
void main()
{
	int n,a[100],i;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	reverse(a,n);
	getch();
}
