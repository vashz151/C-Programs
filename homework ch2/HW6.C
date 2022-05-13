#include<stdio.h>
#include<conio.h>
void main()
{
int dividend,divisor,quotient,remainder;
clrscr();
printf("Enter dividend and divisor:");
scanf("%d %d",&dividend,&divisor);
quotient=dividend/divisor;
remainder=dividend%quotient;
printf("The quotient is %d and remainder is %d",quotient,remainder);
getch();
}
