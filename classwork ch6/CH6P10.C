#include<stdio.h>
#include<conio.h>
void reverse(int a[100],int n)
{
	int i,temp;
	for(i=0;i<=(n-1)/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
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
	printf("Reverse array:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
