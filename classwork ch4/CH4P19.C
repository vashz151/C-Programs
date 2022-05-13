#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,n;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("Enter a 2-digit number:");
		scanf("%d",&n);
		if(n>99)
		{
			printf("\nNumber entered is greater than 99 and hence not accepted\n");
			i--;
			continue;
		}
		sum=sum+n;
	}
	printf("Sum=%d",sum);
	getch();

}