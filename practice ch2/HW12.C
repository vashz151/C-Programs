#include<stdio.h>
#include<conio.h>
void main()
{
float basic,hra,da,gross,x,y;
clrscr();
printf("Enter the basic salary and values of x and y");
scanf("%f %f %f",&basic,&x,&y);
da=x*basic/100;
hra=y*(basic+da)/100;
gross=basic+da+hra;
printf("Basic Salary=%f\nDA=%f\nHRA%f\nGross Salary=%f",
basic,DA,HRA,Gross);
getch();
}
