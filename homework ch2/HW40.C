#include<stdio.h>
#include<conio.h>
void main()
{
float l,b,area,perimeter;
clrscr();
printf("Enter the length and breadth of the rectangle:");
scanf("%f %f",&l,&b);
area=l*b;
perimeter=2*(l+b);
printf("The area and perimeter of the rectangle are: %f and %f",area,perimeter);
getch();
}