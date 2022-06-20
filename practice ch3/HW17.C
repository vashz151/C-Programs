#include<stdio.h>
#include<conio.h>
void main()
{
    int d,n,rev;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Reverse is:");
    rev=0;
    do
    {
    d=n%10;
    rev=rev*10+d;

    n=n/10;
    }while(n!=0);
    printf("%d",rev);
    getch();
}
