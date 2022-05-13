#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("Numbers after swapping in swap function: a=%d and b=%d\n",
	*a,*b);
}
void main()
{
	int a,b;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After returning from swap function a=%d and b=%d",
	a,b);
	getch();

}