#include<stdio.h>
#include<conio.h>
void main()
{
     int n,sum;
     int Sum(int);
     clrscr();
     printf("Enter the value of n:");
     scanf("%d",&n);
     sum=Sum(n);
     printf("Sum of the series is=%d",sum);
     getch();
}
int Sum(int x)
{
     int i,s=0;
     for(i=1;i<=x;i++)
     {
	 s+=i*i;
     }
     return s;
}



