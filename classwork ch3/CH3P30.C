#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=1,k=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c  ",64+k++);
		}
		printf("\n");
	}
	getch();
}












