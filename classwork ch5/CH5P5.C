//Input and output in main()
//calculation in called function
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,nCr,r;
	int facto(int);
	clrscr();
	printf("Enter values of n and r:");
	scanf("%d %d",&n,&r);
	nCr=facto(n)/(facto(r)*facto(n-r));
	printf("nCr=%d",nCr);
	getch();
}
int facto(int x)
{
	int f=1,i;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return(f);
}












