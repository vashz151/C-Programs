#include<stdio.h>
#include<conio.h>
void main()
{
int i,square;
clrscr();
printf("The square of numbers are as follows:\n");
for(i=1;i<=5;i++)
{
       square=i*i;
       printf("%d\n",square);
}
getch();
}