#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int i,n;
	float x;
	clrscr();
	printf("Enter the value of x and the value of n: ");
	scanf("%f %d",&x,&n);
	for(i=2;i<=n;i++)
	{
		printf("%f raised to %d is %f\n",x,i,pow(x,i));
	}
	getch();
}
