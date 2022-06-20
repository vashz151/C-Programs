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
    if(a[0]=='a')
    {
       count++;
    }
    for(i=0;i<=l-1;i++)
    {
	if(a[i]==' ' && a[i+1]=='a')
	{
	  count++;
	}
    }
    printf("Number of words starting with a=%d",count);
    getch();
}
