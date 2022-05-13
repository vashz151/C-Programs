#include<stdio.h>
#include<conio.h>
void main()
{
	int m=0,n,p=0,a[100],b[100],c[100],i;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]%2==0) b[m++]=a[i];
		else c[p++]=a[i];
	}
	printf("Even array:\n");
	for(i=0;i<=m-1;i++)
	{
		printf("%d\n",b[i]);
	}
	printf("Odd array:\n");
	for(i=0;i<=p-1;i++)
	{
		printf("%d\n",c[i]);
	}
	getch();
}
