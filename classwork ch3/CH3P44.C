#include<stdio.h>
#include<conio.h>
void main()
{

	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(j=1;j<=i-1;j++)
		{
			printf("%c",j+'A'-1);
		}
		printf("\n");
	}
	getch();
}