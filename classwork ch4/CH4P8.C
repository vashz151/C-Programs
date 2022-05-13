
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;

	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Factors are:\n");
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	getch();
}