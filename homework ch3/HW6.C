#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i;
float ans;
clrscr();
printf("The numbers and their squareroot are as follows:\n");
printf("NUMBER \tSQUAREROOT\n");
for(i=1;i<=9;i++)
{
       ans=sqrt(i);
       printf("%d \t%f\n",i,ans);
}
getch();
}