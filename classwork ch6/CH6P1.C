#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a0,a[100],i;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	printf("Entered elements are:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
