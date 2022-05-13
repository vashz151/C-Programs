#include<stdio.h>
#include<conio.h>
typedef struct
{
	char name[20];
	int code;
	float salary;
	struct
	{
		int d,m,y;
	}date;
}Employee;
void main()
{
	Employee e[100];
	int i,n;
	float x;
	clrscr();
	printf("Enter the number of employees:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, code, date of joining and salary:");
		flushall();
		gets(e[i].name);
		scanf("%d %d %d %d %f",&e[i].code,
		&e[i].date.d,&e[i].date.m,&e[i].date.y,&x);
		e[i].salary=x;
	}
	printf("Name\tCode\tSalary\tDate of Joining\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%d\t%f\t%d-%d-%d\n",e[i].name,
		e[i].code,e[i].salary,e[i].date.d,
		e[i].date.m,e[i].date.y);
	}
	getch();

}