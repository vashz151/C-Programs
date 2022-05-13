#include<stdio.h>
#include<conio.h>
void main()
{
float hours;
int minutes;
clrscr();
printf("Enter the time in hours:");
scanf("%f",&hours);
minutes=60*hours;
printf("Entered time in minutes is: %d",minutes);
getch();
}