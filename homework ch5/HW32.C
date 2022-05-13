#include<stdio.h>
#include<conio.h>
void main()
{
	int sum;
	int Sum(int);
	clrscr();
	sum=Sum(sum);
	printf("Sum=%d",sum);
	getch();

}
int Sum(int sum)
{
	int i;
	sum=0;
	for(i=1;i<=9;i++)
	{
		sum=sum+i%2;
	}
	return sum;
}