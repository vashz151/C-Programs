#include<stdio.h>
#include<conio.h>
void main()
{
   char a[]={"Hello World"};
   char *p;
   p=a;
   clrscr();
   printf("\n%d  %d  %d  %d",sizeof(a),sizeof(p),strlen(a),strlen(p));
   getch();
}