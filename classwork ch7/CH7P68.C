#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,*p;
	clrscr();
	printf("Enter the number of elements:");
	scanf("%d",&n);
	p=(int *)malloc(n*2);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter a value:");
		scanf("%d",&p[i]);
	}
	printf("Entered values are:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",*(p+i));
	}
	getch();

}