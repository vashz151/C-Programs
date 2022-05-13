#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n,fact=1;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n)
    {
    fact=fact*i;
    i++;
    }
    printf("factorial=%d",fact);

    getch();
}
