#include<stdio.h>
#include<conio.h>
struct student
{
     char name[20];
     int rno,p,c,m;
};
void main()
{
     struct student s[100];
     int total[100],i,n;
     clrscr();
     printf("Enter number of students:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	   printf("Enter name,roll number,marks of physics,chemistry and maths:");
	   flushall();
	   gets(s[i].name);
	   scanf("%d %d %d %d",&s[i].rno,&s[i].p,&s[i].c,&s[i].m);
	   total[i]=0;
	   total[i]+=s[i].p+s[i].c+s[i].m;
     }
     printf("Name\tRoll no\tTotal marks\n");
     for(i=0;i<=n-1;i++)
     {
	   printf("%s\t%d\t%d\n",s[i].name,s[i].rno,total[i]);
     }
     getch();
}
