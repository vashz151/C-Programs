
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=100,d,sum,copy,count;

	clrscr();
	printf("Enter the number of Armstrong's number required:");
	scanf("%d",&count);
	while(count!=0)
	{
		copy=n;
		sum=0;
		while(n!=0)
		{
			d=n%10;
			sum=sum+d*d*d;
			n=n/10;
		}
		if(copy==sum)
		{
			printf("%d\n",copy);
			count--;
		}
		n=copy;
		n++;
	}
	getch();
}