#include<stdio.h>
#include<conio.h>
void main()
{
    int l=0,i;
    char a[100];
    clrscr();
    printf("Enter a string:");
    gets(a);
    while(a[l]!=0)
    {
       l++;
    }
    for(i=0;i<=l-1;i++)
    {
	if(a[i]==' ')
	{
	    l--;
	}
    }
    printf("Length of the string excluding spaces:%d",l);
    getch();
}
