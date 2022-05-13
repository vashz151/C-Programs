#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	float avg;
	float AVG(int,int,int);
	clrscr();
	printf("Enter three numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	avg=AVG(n1,n2,n3);
	printf("Average=%f",avg);
	getch();
}
float AVG(int x,int y,int z)
{
	int p;
	p=x+y+z;
	return(p/3.0);
}












