#include<stdio.h>
#include<conio.h>
void main()
{
     float basic,gross;
     float cost(float);
     clrscr();
     printf("Enter the basic cost:");
     scanf("%f",&basic);
     gross=cost(basic);
     printf("The total cost of the vehicle is %f",gross);
     getch();
}
float cost(float b)
{
     float total_cost=b;
     total_cost+=(0.15+0.1+0.05+0.01)*b;
     return total_cost;
}



