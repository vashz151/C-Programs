#include<stdio.h>
#include<conio.h>
union Person
{
	char name[20];
	int id;
};
void main()
{
	union Person p;
	int choice;
	clrscr();
	printf("1. Name\n2. ID\nEnter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter your name:");
		flushall();
		gets(p.name);
	}
	else if(choice==2)
	{
		printf("Enter your ID:");
		scanf("%d",&p.id);
	}
	else printf("Invalid choice");
	if(choice==1) printf("Name:%s",p.name);
	else if(choice==2) printf("ID:%d",p.id);
	getch();

}