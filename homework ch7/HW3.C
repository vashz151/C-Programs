#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a[100],sq=0,cu=0,i,n;
    clrscr();
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	printf("Enter an element:");
	scanf("%d",(a+i));
	sq+=pow(*(a+i),2);
	cu+=pow(*(a+i),3);
    }
    printf("Sum of squares=%d\nSum of cubes=%d",sq,cu);
    getch();
}