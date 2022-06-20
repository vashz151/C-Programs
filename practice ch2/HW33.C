#include<stdio.h>
#include<conio.h>
void main()
{
float basic_cost,excise,sales_tax,octroi,road_tax,total_cost;
clrscr();
printf("Enter basic cost of the vehicle:");
scanf("%f",&basic_cost);
excise=0.15*basic_cost;
sales_tax=0.1*basic_cost;
octroi=0.05*basic_cost;
road_tax=0.01*basic_cost;
total_cost=basic_cost+excise+sales_tax+octroi+road_tax;
printf("The total cost of the vehicle is:%f",total_cost);
getch();
}