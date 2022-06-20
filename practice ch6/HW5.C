#include<stdio.h>
#include<conio.h>
void main()
{
    int a[12],i;
    clrscr();
    for(i=0;i<=11;i++)
    {
       printf("Enter no of days for month %d:",i+1);
       scanf("%d",&a[i]);
    }
    printf("Entered data is\n");
    for(i=0;i<=11;i++)
    {
       printf("Number of days in month %d =%d\n",i+1,a[i]);
    }
    getch();
}