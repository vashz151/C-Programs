#include<stdio.h>
#include<conio.h>
struct Hockey
{
	int matches,goals;
	char name[20];
};
void main()
{
	struct Hockey s[100],temp;
	int i,j,n;
	clrscr();
	printf("Enter the number of players:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, matches played and goals scored:");
		flushall();
		gets(s[i].name);
		scanf("%d %d",&s[i].matches,&s[i].goals);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(s[j].goals<s[j+1].goals)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Name\tMatches\tGoals scored\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%d\t%d\n",s[i].name,
		s[i].matches,s[i].goals);
	}
	getch();

}