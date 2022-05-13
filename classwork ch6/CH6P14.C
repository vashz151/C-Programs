#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	float a[100],temp;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%f",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("After sorting:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%f\n",a[i]);
	}
	getch();
}
