#include<stdio.h>
#include<conio.h>
struct Employee
{
	char name[20];
	int code;
	float salary;
};
void main()
{
	struct Employee e[100],temp;
	int i,n,j;
	float x;
	clrscr();
	printf("Enter the number of employees:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, ID and salary:");
		flushall();
		gets(e[i].name);
		scanf("%d %f",&e[i].code,&x);
		e[i].salary=x;
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
		     if(e[j].code>e[j+1].code)
		     {
			  temp=e[j];
			  e[j]=e[j+1];
			  e[j+1]=temp;
		     }
		}
	}
	printf("Name\tId\tSalary\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%d\t%f\n",e[i].name,e[i].code,e[i].salary);
	}
	getch();

}