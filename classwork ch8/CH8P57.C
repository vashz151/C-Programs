#include<stdio.h>
#include<conio.h>
struct Cricket
{
	int runs,wickets;
	char name[20];
};
void main()
{
	struct Cricket s[100];
	int i,n;
	clrscr();
	printf("Enter the number of cricketers:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, runs scored and wickets taken:");
		flushall();
		gets(s[i].name);
		scanf("%d %d",&s[i].runs,&s[i].wickets);
	}
	printf("Name\tRuns\tWickets Taken\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%d\t%d\n",s[i].name,s[i].runs,
		s[i].wickets);
	}
	getch();

}