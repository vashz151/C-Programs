#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2;
	char choice,ch;
	clrscr();
	do
	{
		printf("\nEnter the expression:");
		scanf("%d %c %d",&n1,&choice,&n2);
		switch(choice)
		{
			case '+':printf("Sum=%d",n1+n2);
			break;
			case '-':printf("Result of subtraction=%d",n1-n2);
			break;
			case '*':printf("Product=%d",n1*n2);
			break;
			case '/':printf("Quotient=%f",(float)n1/n2);
			break;
			default:printf("Invalid choice");
		}
		printf("\nDo you want to perform another calculation(y/n)?");
		flushall();
		scanf("%c",&ch);
	}while(ch=='y' || ch=='Y');
	getch();
}