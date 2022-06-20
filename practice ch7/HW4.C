#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a[100],b[100],i,n;
    clrscr();
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	printf("Enter an element:");
	scanf("%d",(a+i));
	*(b+i)=*(a+i);
    }
    printf("Elements of arrays b are as follows:\n");
    for(i=0;i<=n-1;i++)
    {
	 printf("%d\n",*(b+i));
    }
    getch();
}