#include<stdio.h>
#include<conio.h>
void main()
{
float rd1,rd2,rd3,avg;
clrscr();
printf("Enter the rainfall of three consecutive days in cms:");
scanf("%f %f %f",&rd1,&rd2,&rd3);
avg=(rd1+rd2+rd3)/3;
printf("The average of three consective days of rainfall is:%fcms",avg);
getch();
}