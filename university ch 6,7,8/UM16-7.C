#include<stdio.h>
#include<conio.h>
struct employee
{
     char name[20],dept[20],joining_date[20];
     float salary;
};
void main()
{
     struct employee e[100];
     int i,n;
     float x;
     clrscr();
     printf("Enter number of employees:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	 printf("Enter name,department,date of joining and salary:");
	 flushall();
	 gets(e[i].name);
	 gets(e[i].dept);
	 gets(e[i].joining_date);
	 scanf("%f",&x);
	 e[i].salary=x;
     }
     printf("Name\tDepartment\tDate of Joining\tSalary\n");
     for(i=0;i<=n-1;i++)
     {
	 if(e[i].salary>50000)
	 {
	     printf("%s\t%s\t\t%s\t\yt%f\n",e[i].name,e[i].dept,e[i].joining_date,e[i].salary);
	 }
     }
     getch();
}