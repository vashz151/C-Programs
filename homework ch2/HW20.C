#include<stdio.h>
#include<conio.h>
void main()
{
int hour,minute,second;
clrscr();
printf("Enter the time (in HH:MM:SS)");
scanf("%2d:%2d:%2d",&hour,&minute,&second);
printf("Entered time is %2d:%2d:%2d",hour,minute,second);
getch();
}