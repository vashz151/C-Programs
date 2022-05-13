#include<stdio.h>
#include<conio.h>
int main()
{
	int n=2,i=2,count;
	//clrscr();
	printf("Enter the count of prime numbers:");
	scanf("%d",&count);
	printf("Following is a list of %d prime numbers:\n",count);
	while(count!=0)
	{
		while(n%i!=0)
		{
			i++;
		}
		if(n==i)
		{
			printf("%d\n",n);
			count--;
		}
		n++;
	}
	getch();
}