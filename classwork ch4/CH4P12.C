#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,choice;
	clrscr();
	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);
	printf("1.Add\n2.Sub\n3.Mul\n4.Quot\n5.Remainder\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Sum=%d",n1+n2);
		break;
		case 2:printf("Result of subtraction=%d",n1-n2);
		break;
		case 3:printf("Product=%d",n1*n2);
		break;
		case 4:printf("Quotient=%d",n1/n2);
		break;
		case 5:printf("Remainder=%d",n1%n2);
		break;
		default:printf("Invalid choice");
	}
	getch();
}