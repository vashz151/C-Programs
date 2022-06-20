#include<stdio.h>
#include<conio.h>
struct test
{
   int x;
   char a[20];
};
void main()
{
    struct test s;
    struct test c;
    clrscr();
    printf("Enter string,value of x:");
    gets(s.a);
    scanf("%d",&s.x);
    c=s;
    printf("Copied structure:\nValue:%d\nString:",c.x);
    puts(c.a);
    getch();
}