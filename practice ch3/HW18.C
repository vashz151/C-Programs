#include<stdio.h>
#include<conio.h>
void main()
{
    int digit,n,sum,prod,rev;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    sum=0,prod=1,rev=0;
    while(n!=0)
    {
    digit=n%10;
    sum=sum+digit;
    prod=prod*digit;
    rev=rev*10+digit;
    n=n/10;
    }
    printf("sum of digits=%d\nproduct of digits=%d",sum,prod);
    printf("\nReverse of the given number is %d",rev);
    getch();
}
