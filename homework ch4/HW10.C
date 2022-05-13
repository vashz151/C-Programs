#include<stdio.h>
#include<conio.h>
void main()
{
    int start,end,units;
    float bill;
    clrscr();
    printf("Enter the starting and ending readings of the month:");
    scanf("%d%d",&start,&end);
    units=end-start;
    if(units<100) bill=1.5*units;
    else if(units<200)  bill=2.5*units;
    else if(units<500)  bill=3.5*units;
    else bill=4.5*units;
    printf("The total bill is=Rs %f",bill);
    getch();
}
