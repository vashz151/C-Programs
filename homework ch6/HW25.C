#include<stdio.h>
#include<conio.h>
void main()
{
    int l=0,i,count=0;
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
	if(a[i]==' ') count++;
	if(a[i]==' ' && a[i+1]==' ') count--;
    }
    if(a[l-1]==' ')
    {
	count--;
    }
    printf("Number of words=%d",count+1);
    getch();
}
