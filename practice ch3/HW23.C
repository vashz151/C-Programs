#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      int i,n,d;
      clrscr();
      printf("Enter the value of n:");
      scanf("%d",&n);
      for(i=0;i<=n;i++)
      {
	 d=pow(3,i);
	 printf("%d ",d);
      }

      getch();
}