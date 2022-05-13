#include<stdio.h>
#include<conio.h>
int add(int *a,int *b)
{
	return(*a + *b);
}
void main()
{
	int a,b;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Sum=%d",add(&a,&b));
	getch();

}