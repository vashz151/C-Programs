#include<stdio.h>
#include<conio.h>
typedef struct
{
     char name[20],mid[20],last[20],place[20],city[20];
     long int pin;
}employee;
void main()
{
     employee e[100];
     int i,n,l1,l2;
     clrscr();
     printf("Enter number of employees:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	   printf("Enter name,middle name,last name,place,city and pin code:");
	   flushall();
	   gets(e[i].name);
	   gets(e[i].mid);
	   gets(e[i].last);
	   gets(e[i].place);
	   gets(e[i].city);
	   scanf("%ld",&e[i].pin);
     }
     for(i=0;i<=n-1;i++)
     {
	   printf("Details of Employee %d:\n",i+1);
	   printf("Name:%s\nMid name:%s\nLast name:%s\nPlace:%s\nCity:%s\nPin code=%ld:\n",e[i].name,e[i].mid,e[i].last,e[i].place,e[i].city,e[i].pin);
     }
     getch();
}