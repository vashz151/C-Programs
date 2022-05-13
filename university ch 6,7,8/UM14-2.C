#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a[100],x;
	clrscr();
	printf("Enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	printf("Enter number whose occurence needs to be deleted:");
	scanf("%d",&x);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==x)
		{
			for(j=i;j<=n-2;j++)
			{
				a[j]=a[j+1];
			}
			n--;
			i--;
		}
	}
	printf("Array after deleting\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();

}