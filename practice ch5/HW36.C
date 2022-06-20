#include<stdio.h>
#include<conio.h>
void main()
{
    int start,end,units;
    float bill;
    float cost(int);
    clrscr();
    printf("Enter the starting and ending readings of the month:");
    scanf("%d%d",&start,&end);
    units=end-start;
    bill=cost(units);
    printf("The total bill is=Rs %f",bill);
    getch();
}
float cost(int units)
{
    float b;
    if(units<100) b=1.5*units;
    else if(units<200)  b=2.5*units;
    else if(units<500)  b=3.5*units;
    else b=4.5*units;
    return b;
}