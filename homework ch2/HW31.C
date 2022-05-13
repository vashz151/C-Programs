#include<stdio.h>
#include<conio.h>
void main()
{
float t1,t2,t3,t4,t5,avg;
clrscr();
printf("Enter the temperature of five sunny days in celcius:");
scanf("%f %f %f %f %f",&t1,&t2,&t3,&t4,&t5);
avg=(t1+t2+t3+t4+t5)/5;
printf("The average temperature of five sunny days=%f celcius",avg);
getch();
}