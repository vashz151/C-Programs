#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     float x=3.0;
     void power(float);
     clrscr();
     power(x);
     getch();
}
void power(float x)
{
     float y;
     y=pow(2,x);
     printf("Third power of 2 is %f",y);
}



