#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     clrscr();
     for(i=1;i<=100;i++)
     {
	 if(i%4==0&&i%5==4&&i%6==4)
	 printf("Number satifying this condition is=%d",i);
     }
     getch();
}
