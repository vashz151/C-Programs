#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("Enter temperature in Fahrenheit:");
scanf("%f",&f);
c=(f-32)*5/9;
printf("The temperature in celcius is %f",c);
getch();
}