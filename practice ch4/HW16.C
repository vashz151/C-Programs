#include<stdio.h>
#include<conio.h>
void main()
{
	int start_day,days_in_month,i,j,k;
	clrscr();
	printf("Enter the number of days in the month:");
	scanf("%d",&days_in_month);
	printf("Enter the start day(1 for Sunday, 2 for Monday...):");
	scanf("%d",&start_day);
	printf("Sun\tMon\tTue\tWed\tThurs\tFri\tSat\n");
	for(i=1;i<start_day;i++)
	{
	   printf("\t");
	}
	for(j=1;j<=8-start_day;j++)
	{
	   printf("%d\t",j);
	}
	printf("\n");
	i=1,k=j;
	while(k<=days_in_month)
	{
	    if(i<=7)
	    {
	       printf("%d\t",k);
	       k++;
	       i++;
	    }
	    else
	    {
	       printf("\n");
	       i=1;
	    }
	}
	getch();
}