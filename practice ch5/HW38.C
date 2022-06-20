#include<stdio.h>
#include<conio.h>
void main()
{
    int m;
    void marks(int);
    clrscr();
    printf("Enter the marks out of 100:");
    scanf("%d",&m);
    marks(m);
    getch();
}
void marks(int m)
{
    if(m>=60) printf("Distinction");
    else if (m>=50&&m<60) printf("First class");
    else if(m>=40&&m<50) printf("Second class");
    else if(m>=35&&m<40) printf("Pass class");
    else printf("Fail");
}