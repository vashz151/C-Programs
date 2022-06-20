#include<stdio.h>
#include<conio.h>
void main()
{
    int *p1,*p2,n1,n2;
    clrscr();
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    p1=&n1;
    p2=&n2;
    printf("Sum=%d\nDiff=%d\nMult=%d\nDiv=%d\n",*p1+*p2,*p1-*p2,*p1**p2,*p1/(*p2));
    getch();
}