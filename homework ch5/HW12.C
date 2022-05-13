#include<stdio.h>
#include<conio.h>
void main()
{
     float n1,n2;
     void act(float,float);
     clrscr();
     printf("Enter two numbers:");
     scanf("%f %f",&n1,&n2);
     act(n1,n2);
     getch();
}
void act(float x,float y)
{
     (x>y)?printf("Multiplication=%f",x*y):printf("Division=%f",x/y);
}



