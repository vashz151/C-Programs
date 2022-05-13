#include<math.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=1,d,sum,copy,count,count1;

	clrscr();
	printf("Enter the number of Armstrong numbers required:");
	scanf("%d",&count);
	printf("\n%d Armstrong numbers:\n",count);
	while(count!=0)
	{
		copy=n;
		sum=0;
		count1=0;
		while(n!=0)
		{
			n=n/10;
			count1++;
		}
		n=copy;
		while(n!=0)
		{
			d=n%10;
			sum=sum+pow(d,count1);
			n=n/10;
		}
		if(copy==sum)
		{
			printf("%d\t",copy);
			count--;
		}
		n=copy;
		n++;
	}
	getch();
}