#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("After AND operation the result is:%d\nAfter OR operation the result is:%d\nAfter EXOR operation the result is:%d\nAfter NOT of 1st number:%d\nAfter NOT of 2nd number:%d\nLeft shift 1st number 3 times gives:%d\nLeft shift 2nd number 3 times gives:%d\nRight shift 1st number 3 times gives:%d\nRight shift 2nd number 3 times gives:%d",
	n1&n2,n1|n2,n1^n2,~n1,~n2,n1<<3,n2<<3,n1>>3,n2>>3);
	getch();
}
