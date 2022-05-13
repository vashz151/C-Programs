#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();
    for(i=1;i<=7;i++)
    {
	 for(j=7-i;j>=0;j--)
	 {
	     printf("%d ",j);
	 }
	 printf("\n");
    }
    getch();
}
