#include<stdio.h>
#include<conio.h>
struct Hockey
{
	int matches,goals;
	char name[20],country[20];
};
int strcomp(char a[100],char b[100])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=b[i]) return(a[i]-b[i]);
	}
	if(a[i]==b[i]) return 0;
	return(a[i]-b[i]);
}
void main()
{
	struct Hockey s[100],temp;
	int i,j,n;
	clrscr();
	printf("Enter the number of players:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, country, matches played and goals scored:");
		flushall();
		gets(s[i].name);
		gets(s[i].country);
		scanf("%d %d",&s[i].matches,&s[i].goals);
	}
	printf("List according to the name:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(strcomp(s[j].name,s[j+1].name)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Name\tCountry\tMatches\tGoals scored\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%d\n",s[i].name,
		s[i].country,s[i].matches,s[i].goals);
	}
	printf("List according to the country name:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(strcomp(s[j].country,s[j+1].country)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Name\tCountry\tMatches\tGoals scored\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%d\n",s[i].name,
		s[i].country,s[i].matches,s[i].goals);
	}

	printf("List according to the matches played:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(s[j].matches<s[j+1].matches)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Name\tCountry\tMatches\tGoals scored\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%d\n",s[i].name,
		s[i].country,s[i].matches,s[i].goals);
	}

	printf("List according to the goals scored:\n");
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
	printf("Name\tCountry\tMatches\tGoals scored\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%d\n",s[i].name,
		s[i].country,s[i].matches,s[i].goals);
	}
	getch();

}