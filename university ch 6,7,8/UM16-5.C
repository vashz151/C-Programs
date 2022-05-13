#include<stdio.h>
#include<conio.h>
void main()
{
      int i,j,n,iCj;
      int facto(int);
      clrscr();
      printf("Enter number of lines:");
      scanf("%d",&n);
      for(i=0;i<=n-1;i++)
      {
	   for(j=n-i-1;j>0;j--)
	   {
	       printf(" ");
	   }
	   for(j=0;j<=i;j++)
	   {
		iCj=facto(i)/(facto(j)*facto(i-j));
		printf("%d ",iCj);
	   }
	   printf("\n");
      }
      getch();
}
int facto(int x)
{
      int fact=1,i=1;
      while(i<=x)
      {
	  fact=fact*i;
	  i++;
      }
      return fact;
}
