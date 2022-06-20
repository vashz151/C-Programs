#include<stdio.h>
#include<conio.h>
void main()
{
float basic,employee_fund,employer_fund,x,y;
clrscr();
printf("Enter basic salary:");
scanf("%f",&basic);
printf("Enter employee contribution in percentage as x:");
scanf("%f",&x);
printf("Enter employer contribution in percentage as y:");
scanf("%f",&y);
employee_fund=x*basic/100;
employer_fund=y*basic/100;
printf("The basic salary is:%f \nEmployee provident fund is:%f\nEmployer provident fund is:%f",
basic,employee_fund,employer_fund);
getch();
}
