#include<stdio.h>
#include<conio.h>
struct size
{
   int i;
   float m;
   char a[100];
};
void main()
{
    struct size s;
    int y;
    clrscr();
    y=sizeof(s);
    printf("Size of structure is %d",y);
    getch();
}