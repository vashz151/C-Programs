#include<stdio.h>
#include<conio.h>
void main()
{
     int i,a[100],n,l=0,sum,large,small,prod;
     clrscr();
     printf("Enter a number:");
     scanf("%d",&n);
     for(i=0;n!=0;i++)
     {
	 a[i]=n%10;
	 n=n/10;
	 l++;
     }
     for(i=0;i<=l-1;i++)
     {
	 if(a[i]>large) large=a[i];
	 if(a[i]<small) small=a[i];
     }
     sum=large+small;
     prod=large*small;
     printf("Sum of largest and smallest digit=%d\nProduct of largest and smallest digit=%d",sum,prod);
     getch();
}
