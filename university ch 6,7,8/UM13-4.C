#include<stdio.h>
#include<conio.h>
int Sum(int a[],int i)
{
    int s=0;
    s+=a[i];
    return s;
}
void main()
{
    int i,a[100],n,sum=0;
    clrscr();
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
	 printf("Enter an element:");
	 scanf("%d",&a[i]);
	 sum+=Sum(a,i);
    }
    printf("Sum of all array elements=%d:",sum);
    getch();
}