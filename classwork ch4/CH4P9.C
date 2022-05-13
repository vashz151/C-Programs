
#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;

	clrscr();
	printf("Enter marks (out of 100):");
	scanf("%d",&marks);
	if(marks>100 || marks<0) printf("Invalid marks");
	else if(marks>=70) printf("Distinction");
	else if(marks>=60) printf("First Class");
	else if(marks>=50) printf("Second Class");
	else if(marks>=40) printf("Pass Class");
	else printf("Fail");
	getch();
}