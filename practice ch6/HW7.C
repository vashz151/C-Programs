#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[12];
    float sum=0,avg;
    clrscr();
    for(i=0;i<=11;i++)
    {
	printf("Enter sales of month %d:",i+1);
	scanf("%d",&a[i]);
    }
    for(i=0;i<=11;i++)
    {
	sum=sum+a[i];
    }
    avg=sum/12.0;
    printf("Average sale=%f",avg);
    getch();
}
