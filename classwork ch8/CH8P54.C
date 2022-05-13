#include<stdio.h>
#include<conio.h>
struct Cricket
{
	int runs,wickets;
	char name[20];
};
void main()
{
	struct Cricket s;
	clrscr();
	printf("Enter name, runs scored and wickets taken:");
	gets(s.name);
	scanf("%d %d",&s.runs,&s.wickets);
	printf("Name:%s\nRuns scored:%d\nWickets Taken:%d\n",
	s.name,s.runs,s.wickets);
	getch();

}