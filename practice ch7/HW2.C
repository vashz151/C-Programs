#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],*p,i,n;
    clrscr();
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	printf("Enter an element:");
	scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<=n-1;i++)
    {
	printf("%d\n",*p++);
    }
    getch();
}