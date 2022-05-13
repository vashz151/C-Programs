#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	clrscr();

	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Values entered:a=%d and b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Values after swapping:a=%d and b=%d",a,b);
	getch();
}


