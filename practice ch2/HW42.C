#include<stdio.h>
#include<conio.h>
void main()
{
float speed,distance,time;
clrscr();
printf("Enter the speed in km/hr and distance in km:");
scanf("%f %f",&speed,&distance);
time=distance/speed;
printf("The time required is: %f hours",time);
getch();
}