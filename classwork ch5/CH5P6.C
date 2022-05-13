//Input and output in main()
//calculation in called function
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,nPr,r;
	int facto(int);
	clrscr();
	printf("Enter values of n and r:");
	scanf("%d %d",&n,&r);
	nPr=facto(n)/facto(n-r);
	printf("nPr=%d",nPr);
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












