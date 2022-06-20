#include<stdio.h>
#include<conio.h>
void main()
{
float n1,n2,n3,avg;
clrscr();
printf("Enter three real numbers:");
scanf("%f %f %f",&n1,&n2,&n3);
avg=(n1+n2+n3)/3;
printf("The average value of real numbers is:%f",avg);
getch();
}