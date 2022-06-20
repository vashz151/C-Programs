#include<stdio.h>
#include<conio.h>
void funct(int n)
{
    int digit,sum=0,prod=1,rev=0;
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
}
void main()
{
    int n;
    clrscr();
    printf("Enter the the number:");
    scanf("%d",&n);
    funct(n);
    getch();
}
