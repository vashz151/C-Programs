#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int X,n,ans;
clrscr();
printf("Enter the value of x and n:");
scanf("%d %d",&X,&n);
ans=pow(X,n);
printf("The value of X^n is %d",ans);
getch();
}