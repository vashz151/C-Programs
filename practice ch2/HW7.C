#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,y,simple_interest;
clrscr();
printf("Enter principal amount,rate of interest and years:");
scanf("%f %f %f",&p,&r,&y);
simple_interest=p*r*y/100;
printf("The simple interest is %f",simple_interest);
getch();
}