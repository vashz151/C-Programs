#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    clrscr();
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0) goto leap;
    printf("Not a leap year");
    goto done;
    leap:printf("Leap year");
    done:
    getch();
}