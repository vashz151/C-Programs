#include<stdio.h>
#include<conio.h>
void main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},n;
    clrscr();
    printf("Enter the month number:");
    scanf("%d",&n);
    if(n<1 && n>12)
    {
       printf("Invalid input");
    }
    else
    {
       if(n==2)
       {
	    printf("Number of days in month 2 is 28 or 29");
       }
       else
       {
	    printf("Number of days in month %d is %d",n,a[n-1]);
       }
    }
    getch();
}