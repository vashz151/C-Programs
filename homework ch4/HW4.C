#include<stdio.h>
#include<conio.h>
void main()
{
    float basic,hra,da,con,inct,bonus,gross,sale;
    clrscr();
    printf("Enter the total sales in Rs:");
    scanf("%f",&sale);
    basic=3000;
    hra=0.2*basic;
    da=1.10*basic;
    con=500;
    if(sale>100000)
    {
      inct=0.1*sale;
      bonus=500;
    }
    else
    {
	inct=0.05*sale;
	bonus=200;
    }
    gross=basic+hra+da+con+inct+bonus;
    printf("The gross salary is Rs %f",gross);
    getch();
}

