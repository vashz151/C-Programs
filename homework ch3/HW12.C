#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int i,n,fact;
float x,num,term,sum;
clrscr();
printf("Enter the value of x and n:");
scanf("%f %d",&x,&n);
sum=x;
for(i=2,fact=1;i<=n;i+=2)
{
fact=fact*i*(i-1);
num=pow(x,i);
term=num/fact;
sum=sum+term;

}
printf("Sum of the following series is equal to %f",sum);
getch();
}