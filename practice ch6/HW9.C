#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[100],n;
    clrscr();
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	printf("Enter a value:");
	scanf("%d",&a[i]);
    }
    printf("Element Address\n");
    for(i=0;i<=n-1;i++)
    {
	printf("%d\t%x\n",a[i],&a[i]);
    }
    getch();
}