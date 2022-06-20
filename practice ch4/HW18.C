#include<stdio.h>
#include<conio.h>
void main()
{
    float bill;
    int page,copies;
    clrscr();
    printf("Enter the number of pages and copies to print:");
    scanf("%d%d",&page,&copies);
    bill=page*3;
    if(copies>=1) bill=bill+page*5+page*3*(copies-1);
    else if(copies==0) bill=bill;
    printf("The total bill is =%f",bill);
    getch();
}
