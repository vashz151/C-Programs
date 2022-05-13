#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,n,even_count=0;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter an element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]%2==0) even_count++;
	}
	printf("%d even numbers\n%d Odd numbers",even_count,
	n-even_count);
	getch();
}