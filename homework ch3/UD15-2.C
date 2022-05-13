#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  float sum,x,term,denr;
  clrscr();
  printf("Enter the x and number of terms:");
  scanf("%f%d",&x,&n);
  sum=1;
  term=1;
  for(i=1;i<n;i++)
  {
    denr=(2*i)*(2*i-1);
    term=-term*x*x/denr;
    sum=sum+term;
  }
  printf("Sum=%f",sum);
  getch();
}