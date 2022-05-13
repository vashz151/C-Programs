#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k=0,l=0;
  clrscr();
  for(i=1;i<=5;i++)
  {
    for(j=1,k=l=k+i;j<=i;j++)
    {
      printf("%c ",64+l--);
    }
    printf("\n");
  }
  getch();
}