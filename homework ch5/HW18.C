#include<stdio.h>
#include<conio.h>
void main()
{
     int n1,n2;
     void swap(int,int);
     clrscr();
     printf("Enter two numbers:");
     scanf("%d %d",&n1,&n2);
     swap(n1,n2);
     getch();
}
void swap(int x,int y)
{
     x=x+y;
     y=x-y;
     x=x-y;
     printf("After swapping n1=%d and n2=%d",x,y);
}



