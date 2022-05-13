#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     void squar();
     clrscr();
     printf("The perfect squares from 1 to 500 are:");
     squar();
     getch();
}
void squar()
{
     int i,a;
     float b;
     for(i=1;i<=500;i++)
     {
	 b=sqrt(i);
	 a=b;
	 if(a==b)
	 printf("\n%d",i);
     }
}