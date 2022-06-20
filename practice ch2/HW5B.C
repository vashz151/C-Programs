#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,cube;
clrscr();
printf("Enter the number:");
scanf("%d",&n);
cube=pow(n,3);
printf("The cube of the given number is%d",cube);
getch();
}