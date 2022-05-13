#include<stdio.h>
#include<conio.h>
void sort_array(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void merge_array(int a[10],int n,int b[10],int m,int c[20])
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		c[i]=a[i];
	}
	for(;(i-n)<m;i++)
	{
		c[i]=b[i-n];
	}
}
void main()
{
	int a[]={12,3,44,1,14,11,1,122},b[]={24,12,33,44,1,2,7},c[20],i;
	clrscr();
	printf("Before sorting array A:\n");
	for(i=0;i<=7;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nBefore sorting array b:\n");
	for(i=0;i<=6;i++)
	{
		printf("%d\t",b[i]);
	}
	sort_array(a,8);
	sort_array(b,7);
	printf("\nAfter sorting array A:\n");
	for(i=0;i<=7;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nAfter sorting array b:\n");
	for(i=0;i<=6;i++)
	{
		printf("%d\t",b[i]);
	}
	merge_array(a,8,b,7,c);
	printf("\nAfter merging arrays b:\n");
	for(i=0;i<=14;i++)
	{
		printf("%d\t",c[i]);
	}
	getch();
}
