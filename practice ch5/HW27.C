#include<stdio.h>
#include<conio.h>
void Rev(int n)
{
    int d,rev=0;
    do
    {
       d=n%10;
       rev=rev*10+d;
       n=n/10;
    }while(n!=0);
    printf("%d",rev);

}
void main()
{
    int n;
    clrscr();
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Reverse of the number is:");
    Rev(n);
    getch();
}
