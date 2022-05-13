#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     int n;
     float x,sum;
     float SUMFUN(float,int);
     clrscr();
     printf("Enter the value of x and n:");
     scanf("%f %d",&x,&n);
     sum=SUMFUN(x,n);
     printf("Sum of the series is:%f",sum);
     getch();
}
float SUMFUN(float x,int n)
{
     int i,fact=1,sign=-1;
     float term,sum,num;
     term=x;
     sum=term;
     for(i=3;i<=n;i+=2)
     {
	 fact=fact*i*(i-1);
	 num=pow(x,i);
	 term=num/fact;
	 sum=sum+sign*term;
	 sign=sign*-1;
     }
     return sum;
}

