#include<stdio.h>
#include<conio.h>
struct Cricket
{
	char name[20],country[20];
	int best_score;
	float avg;
};
void main()
{
	struct Cricket e[100],temp;
	int i,j,n;
	float x;
	clrscr();
	printf("Enter the number of players:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, country, best score and batting average");
		flushall();//scanf*("%c");
		gets(e[i].name);
		gets(e[i].country);
		scanf("%d %f",&e[i].best_score,&x);
		e[i].avg=x;
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(e[j].avg<e[j+1].avg)
			{
				temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
	printf("Name\tCountry\tBest\tAverage\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%f\n",e[i].name,
		e[i].country,e[i].best_score,e[i].avg);
	}
	getch();

}