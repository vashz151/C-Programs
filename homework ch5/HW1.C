#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     void dis(int);
     clrscr();
     printf("Enter the value of n:");
     scanf("%d",&n);
     dis(n);
     getch();
}
void dis(int n)
{
     int i;
     printf("The first %d natural numbers are:\n",n);
     for(i=1;i<=n;i++)
     {
	printf("%d\n",i);
     }
}