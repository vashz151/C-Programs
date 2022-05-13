#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=i-1;j++)
    {
      printf(" ");
    }
    for(j=1;j<=5-i;j++)
    {
      printf("%c",j+64);
    }
    printf("\n");
  }
  getch();
}