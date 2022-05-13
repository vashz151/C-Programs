#include<stdio.h>
#include<conio.h>
void main()
{
int A,B,n;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
printf("Enter divisors A and B:");
scanf("%d %d",&A,&B);
(n%A==0&& n%B==0)?printf("Divisible"):printf("Not Divisible");
getch();
}