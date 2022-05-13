#include<stdio.h>
#include<conio.h>
void main()
{
float l,b,area,perimeter;
clrscr();
printf("Enter the length and breadth:");
scanf("%f %f",&l,&b);
area=l*b;
perimeter=2*(l+b);
printf("The area of rectangle is %f\nPerimeter of rectangle is %f",
area,perimeter);
getch();
}
