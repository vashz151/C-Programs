#include<stdio.h>
#include<conio.h>
int facto(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		for(j=1;j<=n-i-1;j++)
		{
			printf("   ");
		}
		for(j=0;j<=i;j++)
		{
			printf("%3d   ",facto(i)/(facto(j)*facto(i-j)));
		}
		printf("\n");
	}
	getch();
}