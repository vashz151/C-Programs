#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=4-i;j++)
    {
      printf(" ");
    }
    for(j=i;j<=2*i-1;j++)
    {
      printf("%d",j);
    }
    for(j=2*i-2;j>=i;j--)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  getch();
}