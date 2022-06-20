#include<stdio.h>
#include<conio.h>
void main()
{
     float x,y,z,avg;
     float Avg(float,float,float);
     clrscr();
     printf("Enter three real numbers:");
     scanf("%f %f %f",&x,&y,&z);
     avg=Avg(x,y,z);
     printf("The average of three real numbers is:%f",avg);
     getch();
}
float Avg(float x,float y,float z)
{
     float a;
     a=(x+y+z)/3;
     return a;
}



