#include<stdio.h>
#include<conio.h>
struct car
{
   int reg_no;
   char model_name[20],manfact_name[20];
   float mileage;
};
void main()
{
    struct car c;
    clrscr();
    printf("Enter model name,manufacturer's name,registration number and averae mileage:");
    gets(c.model_name);
    gets(c.manfact_name);
    scanf("%d %f",&c.reg_no,&c.mileage);
    printf("Model name:%s\nManufacturer's name:%s\nRegistration Number:%d\nAverage Mileage:%f",c.model_name,c.manfact_name,c.reg_no,c.mileage);
    getch();
}