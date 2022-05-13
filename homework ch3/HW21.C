#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0,i=1;
    do
    {
       sum=sum+i;
       i++;
    }while(i<=n);
    printf("Factorial is=%d",sum);
    getch();
}
