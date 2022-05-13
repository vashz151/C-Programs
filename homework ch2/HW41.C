#include<stdio.h>
#include<conio.h>
void main()
{
float side_length,area,perimeter;
clrscr();
printf("Enter the side length of square:");
scanf("%f",&side_length);
area=side_length*side_length;
perimeter=4*side_length;
printf("The area and perimeter of the square are: %f and %f",area,perimeter);
getch();
}