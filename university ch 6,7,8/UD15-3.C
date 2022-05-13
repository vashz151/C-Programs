#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[100],small,i;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=1;i<=n-1;i++)
	{
		if(a[i]<small) small=a[i];
	}
	printf("Smallest Number:%d",small);
	getch();
}
