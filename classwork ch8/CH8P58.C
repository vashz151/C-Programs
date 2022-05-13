#include<stdio.h>
#include<conio.h>
struct Student
{
	int roll_no,cp,eg,m2,total;
	char name[20];
};
void main()
{
	struct Student s[100],temp;
	int n,i,j;
	clrscr();
	printf("Enter the number of students:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter name, roll number and marks in 3 subjects:");
		flushall();
		gets(s[i].name);
		scanf("%d %d %d %d",&s[i].roll_no,&s[i].cp,
		&s[i].eg,&s[i].m2);
		s[i].total=s[i].cp+s[i].eg+s[i].m2;
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(s[j].total<s[j+1].total)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Name\tRoll No\tCP\tEG\tM2\tTotal\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%d\n",s[i].name,
		s[i].roll_no,s[i].cp,s[i].eg,s[i].m2,s[i].total);
	}
	getch();

}