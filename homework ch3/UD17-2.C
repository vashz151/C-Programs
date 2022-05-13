#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    clrscr();
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i;
    }
    printf("Sum of the series is:%d",sum);
    getch();
}