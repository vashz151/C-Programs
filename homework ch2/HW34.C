#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,y,ans;
clrscr();
printf("Enter the value of x and y:");
scanf("%f %f",&x,&y);
ans=pow(x,y);
printf("The answer is:%f",ans);
getch();
}