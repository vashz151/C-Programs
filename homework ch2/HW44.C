#include<stdio.h>
#include<conio.h>
void main()
{
float a,b;
clrscr();
printf("Enter two numbers a and b:");
scanf("%f %f",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After interchanging a and b are: %f and %f",a,b);
getch();
}