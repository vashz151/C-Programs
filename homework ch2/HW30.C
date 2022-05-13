#include<stdio.h>
#include<conio.h>
void main()
{
float cost_price,selling_price,profit,loss;
clrscr();
printf("Enter the cost price and selling price:");
scanf("%f %f",&cost_price,&selling_price);
profit=selling_price-cost_price;
loss=cost_price-selling_price;
(selling_price>=cost_price)?((selling_price>cost_price)?printf("Profit=%f",profit):printf("No profit or loss")):printf("Loss=%f",loss);
getch();
}
