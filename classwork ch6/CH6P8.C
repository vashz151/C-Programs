#include<stdio.h>
#include<conio.h>
int smallest(int a[100],int n)
{
	int i,small;
	small=a[0];
	for(i=1;i<=n-1;i++)
	{
		if(a[i]<small) small=a[i];
	}
	return small;
}
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
	small=smallest(a,n);
	printf("Smallest Number:%d",small);
	getch();
}
