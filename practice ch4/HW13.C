#include<stdio.h>
#include<conio.h>
void main()
{
    int calls;
    float bill;
    clrscr();
    printf("Enter the number of calls:");
    scanf("%d",&calls);
    if(calls<100) goto done;
    else if(calls>=100&&calls<200) bill=calls*1;
    else if(calls>=200&&calls<300) bill=calls*2;
    else bill=calls*3;
    printf("Bill=%f",bill); goto end;
    done:printf("No charges for this month");
    end:
    getch();
}