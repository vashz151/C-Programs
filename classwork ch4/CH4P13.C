#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	char choice;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	flushall();
	printf("+.Add\n-.Sub\n*.Mul\n/.Quot\nEnter your choice:");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+':printf("Sum=%d",n1+n2);
		break;
		case '-':printf("Result of subtraction=%d",n1-n2);
		break;
		case '*':printf("Product=%d",n1*n2);
		break;
		case '/':printf("Quotient=%d",n1/n2);
		break;
		default:printf("Invalid choice");
	}
	getch();
}