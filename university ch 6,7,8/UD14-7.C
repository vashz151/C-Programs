#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j;
      float avg,a[100],sum=0;
      clrscr();
      for(i=1;i<=4;i++)
      {
	  for(j=0;j<=5;j++)
	  {
	       printf("Enter a value:");
	       scanf("%f",&a[j]);
	       sum+=a[j];
	  }
	  avg=sum/6;
	  printf("The average of readings of experiment %d is %f\n",i,avg);
      }
      getch();
}


