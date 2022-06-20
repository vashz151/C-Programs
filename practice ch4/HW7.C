#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     int i,a;
     float b;
     clrscr();
     printf("The perfect squares from 1 to 500 are:");
     for(i=1;i<=500;i++)
     {
	 b=sqrt(i);
	 a=b;
	 if(a==b)
	 printf("\n%d",i);
     }
     getch();
}
