#include<stdio.h>
#include<conio.h>
struct Hockey
{
	int matches,goals;
	char name[20];
};
void main()
{
	struct Hockey s;
	clrscr();
	printf("Enter name, matches played and goals scored:");
	gets(s.name);
	scanf("%d %d",&s.matches,&s.goals);
	printf("Name:%s\nMatches played:%d\nGoals scored:%d\n",
	s.name,s.matches,s.goals);
	getch();

}