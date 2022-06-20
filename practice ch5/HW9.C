#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     void prime(int);
     clrscr();
     printf("Enter the number:");
     scanf("%d",&n);
     prime(n);
     getch();
}
void prime(int n)
{
    int i=2;
    while(n%i!=0)
    {
      i++;
    }
    if(n==i) printf("Prime Number");
    else
    {
      if(n==1) printf("Niether prime nor composite");
      else printf("Not a prime number");
    }
}