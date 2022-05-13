#include<stdio.h>
#include<conio.h>
void main()
{
   double x=28;
   int r;
   r=x%5; //mod doesnt work on double hence compile time error
   printf("\n r=%d",r);
}