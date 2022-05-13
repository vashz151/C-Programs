#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     clrscr();
     printf("Enter two numbers:");
     scanf("%d%d",&a,&b);
     if(a==b)
     {
	printf("The numbers are equal");
     }
     else
     {
	printf("Numbers are not equal");
     }
     getch();
}