#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
      i++;
    }while(n%i!=0);
    if(n==i) printf("It is a prime number");
    else printf("Not a prime number");
    getch();
}
