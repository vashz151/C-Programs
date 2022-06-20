#include<stdio.h>
#include<conio.h>
void main()
{
long int a,b,c,d,e,f,g,h,total;
clrscr();
printf("Enter number of notes of Rs1000,Rs500,Rs100 as a,b,c respectively:");
scanf("%ld %ld %ld",&a,&b,&c);
printf("Enter number of notes of Rs50,Rs20,Rs10 as d,e,f respectively:");
scanf("%ld %ld %ld",&d,&e,&f);
printf("Enter the number of notes of Rs5 and Re1 as g and h respectively:");
scanf("%ld %ld",&g,&h);
total=a*1000+b*500+c*100+d*50+e*20+f*10+g*5+h*1;
printf("The total amount is:Rs.%ld",total);
getch();
}