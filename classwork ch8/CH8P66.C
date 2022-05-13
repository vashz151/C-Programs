#include<stdio.h>
#include<conio.h>
struct Employee
{
	char name[20];
	int no,exp;
	float salary;
};
void main()
{
	struct Employee e[100];
	int i,n;
	float x;
	clrscr();
	printf("Enter the number of employees:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, number, experience and salary:");
		flushall();
		gets(e[i].name);
		scanf("%d %d %f",&e[i].no,&e[i].exp,&x);
		e[i].salary=x;
	}
	for(i=0;i<=n-1;i++)
	{
		if(e[i].exp>=5 && e[i].salary<10000)
		printf("%s\t%d\n",e[i].name,e[i].no);
	}
	getch();

}