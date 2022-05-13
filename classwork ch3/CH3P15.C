#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,x;
	clrscr();
	printf("Enter the values of x and n:");
	scanf("%d %d",&x,&n);
	for(i=2;i<=n;i++)
	{
		printf("%d raised to %d = %d\n",x,i,
		(int)pow(x,i));
	}
	getch();
}