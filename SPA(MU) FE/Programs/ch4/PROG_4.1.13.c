
#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,result;
	char choice;
	clrscr();
	printf("Enter the numbers:");
	scanf("%d %d",&no1,&no2);
	printf("+.Add\n-.Subtract\n*.Multiply\n/.Divide\n%.Modulus\nEnter your choice:");
	choice=getche();
	printf("\n");
	switch(choice)
	{
		case '+':result=no1+no2;
		printf("Sum= %d",result);
		break;
		case '-':result=no1-no2;
		printf("Difference= %d",result);
		break;
		case '*':result=no1*no2;
		printf("Product= %d",result);
		break;
		case '/':result=no1/no2;
		printf("Quotient= %d",result);
		break;
		case '%':result=no1%no2;
		printf("Remainder= %d",result);
		break;
		default:printf("Invalid choice");
	}
	getch();
}
