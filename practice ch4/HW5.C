#include<stdio.h>
#include<conio.h>
void main()
{
     int i,count=0;
     clrscr();
     for(i=1;i<=100;i++)
     {
	 if(i%2!=0||i%3!=0||i%5!=0)
	 count++;
     }
     printf("Total numbers satisfying given conditions are=%d",count);
     getch();
}

