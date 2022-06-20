#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fact;
    int facto(int);
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    fact=facto(n);
    printf("factorial=%d",fact);
    getch();
}
int facto(int n)
{
    int i=1,f=1;
    while(i<=n)
    {
       f=f*i;
       i++;
    }
    return f;
}