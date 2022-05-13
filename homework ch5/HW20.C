#include<stdio.h>
#include<conio.h>
void main()
{
     float length,breadth;
     void calc(float,float);
     clrscr();
     printf("Enter the length and breadth:");
     scanf("%f %f",&length,&breadth);
     calc(length,breadth);
     getch();
}
void calc(float x,float y)
{
     float area,perimeter;
     area=x*y;
     perimeter=2*(x+y);
     printf("Area of rectangle=%f\nPerimeter of rectangle=%f",area,perimeter);

}



