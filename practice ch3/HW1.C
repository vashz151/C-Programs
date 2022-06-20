#include<stdio.h>
#include<conio.h>
void main()
{
      int i;
      clrscr();
      printf("The first fuve natural numbers along with their squares are:\n");
      printf("NUMBER \tSQUARE\n");
for(i=1;i<=5;i++)
{
       printf("%d \t %2d\n",i,i*i);
}
getch();
}