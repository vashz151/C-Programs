#include<stdio.h>
#include<conio.h>
void main()
{
    int i,fact,n;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    fact=1,i=1;
    do
    {
       fact=fact*i;
       i++;
    }while(i<=n);
    printf("Factorial is=%d",fact);
    getch();
}
