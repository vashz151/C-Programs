#include<stdio.h>
#include<conio.h>
void main()
{
float inch,cm;
clrscr();
printf("Enter the length in inches:");
scanf("%f",&inch);
cm=inch*2.54; //1 inch=2.54cm//
printf("The legth in cm is %f cm",cm);
getch();
}

