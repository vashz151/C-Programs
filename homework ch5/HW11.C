#include<stdio.h>
#include<conio.h>
void main()
{
     float avg,d1,d2,d3,d4,d5;
     float Avg(float,float,float,float,float);
     clrscr();
     printf("Enter the temperature of five days:");
     scanf("%f%f%f%f%f",&d1,&d2,&d3,&d4,&d5);
     avg=Avg(d1,d2,d3,d4,d5);
     printf("Average temperature is:%f",avg);
     getch();
}
float Avg(float d1,float d2,float d3,float d4,float d5)
{
     float ans;
     ans=(d1+d2+d3+d4+d5)/5.0;
     return ans;
}



