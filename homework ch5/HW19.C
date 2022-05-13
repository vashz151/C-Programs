#include<stdio.h>
#include<conio.h>
void main()
{
     float hour,min;
     float Time(float);
     clrscr();
     printf("Enter time in hours:");
     scanf("%f",&hour);
     min=Time(hour);
     printf("Time in minutes=%f",min);
     getch();
}
float Time(float x)
{
     float m;
     m=x*60;
     return m;
}



