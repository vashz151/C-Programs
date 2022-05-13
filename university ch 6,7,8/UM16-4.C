#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int l=0;
    char a[100],b[100];
    clrscr();
    printf("Enter a string:");
    gets(a);
    printf("Enter another string:");
    gets(b);
    l=strlen(a);
    printf("length=%d\n",l);
    strcat(a," ");
    strcat(a,b);
    printf("Joint string:%s",a);
    getch();
}