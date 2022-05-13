#include<stdio.h>
#include<conio.h>
struct time
{
     float h,min,sec;
     int date,mon,year;
};
void main()
{
     struct time t;
     float x;
     clrscr();
     printf("Enter time in hour:");
     scanf("%f",&x);
     t.h=x;
     t.min=t.h*60;
     t.sec=t.min*60;
     printf("Enter date,month and year:");
     scanf("%d %2d %4d",&t.date,&t.mon,&t.year);
     printf("Time=%f hours=%f mins=%f sec\n",t.h,t.min,t.sec);
     printf("Date=%d-%d-%d\nMonth=%2d\nYear=%4d",t.date,t.mon,t.year,t.mon,t.year);
     getch();
}