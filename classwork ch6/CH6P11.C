#include<stdio.h>
#include<conio.h>
int search(int a[100],int n,int x)
{
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==x) break;
	}
	return i;

}
void main()
{
	int n,a[100],i,x;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a number:");
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&x);
	i=search(a,n,x);
	if(i==n) printf("Not found");
	else printf("Found at index:%d",i);
	getch();
}
