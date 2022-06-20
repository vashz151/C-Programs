#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    int prime(int);
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    if(prime(n)) printf("Prime Number");
    else printf("Not a prime number");
    getch();
}
int prime(int n)
{
    int i=1;
    do
    {
      i++;
    }while(n%i!=0);
    if(n==i) return 1;
    else return 0;
}