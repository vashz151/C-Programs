#include<stdio.h>
#include<conio.h>
struct cricketer
{
     char name[20],country[20];
     float average;
};
void main()
{
     struct cricketer c[100];
     int i,n,k;
     float m;
     char x[20];
     clrscr();
     printf("Enter the number of cricketers:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	 printf("Enter name,country and batting average:");
	 flushall();
	 gets(c[i].name);
	 gets(c[i].country);
	 scanf("%f",&m);
	 c[i].average=m;
     }
     printf("Enter player name:");
     flushall();
     scanf("%s",&x);
     printf("Name\tCountry\tAverage\n");
     for(i=0;i<=n-1;i++)
     {
	for(k=0;x[k]!=0;k++)
	{
	    if(x[k]!=c[i].name[k]) break;
	}
	if(x[k]==0) printf("%s\t%s\t%f\n",c[i].name,c[i].country,c[i].average);
     }
     getch();
}

