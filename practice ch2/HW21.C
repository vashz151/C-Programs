#include<stdio.h>
#include<conio.h>
void main()
{
float feet,inch;
clrscr();
printf("Enter the measurent in feet:");
scanf("%f",&feet);
inch=12*feet;
printf("The measurement in inches is %f",inch);
getch();
}