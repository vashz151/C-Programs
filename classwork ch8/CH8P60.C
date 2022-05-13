#include<stdio.h>
#include<conio.h>
struct Cricket
{
	int runs,wickets;
	char name[20];
};
void main()
{
	struct Cricket s[100],temp;
	int i,n,j;
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
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(s[j].runs<s[j+1].runs)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Name\tRuns\tWickets Taken\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%d\t%d\n",s[i].name,s[i].runs,
		s[i].wickets);
	}
	getch();

}