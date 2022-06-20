#include<stdio.h>
#include<conio.h>
void main()
{
float kg,grams;
clrscr();
printf("Enter the mass in kilograms:");
scanf("%f",&kg);
grams=1000*kg;
printf("The mass in grams= %f grams",grams);
getch();
}
