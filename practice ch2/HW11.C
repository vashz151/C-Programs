#include<stdio.h>
#include<conio.h>
void main()
{
	int p,c,m;
	float per;
	clrscr();
	printf("Enter the marks in three subjects(out of 100):");
	scanf("%d %d %d",&p,&c,&m);
	per=(p+c+m)/3.0;
	printf("Percentage=%f\n",per);
	(per>=40)?((per>=50)?((per>=60)?((per>=70)?
	printf("Distinction"):printf("First Class")):
	printf("Second Class")):printf("Pass class")):
	printf("Fail");
	getch();
}
