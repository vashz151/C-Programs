#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,l=0,j;
    clrscr();
    printf("Enter a string:");
    gets(a);
    printf("After deleting multiple spaces\n");
    while(a[l]!=0)
    {
       l++;
    }
    for(i=0;i<=l-1;i++)
    {
       if(a[i]==' '&& a[i+1]==' ')
       {
	   for(j=i;j<=l-1;j++)
	   {
	       a[j]=a[j+1];
	   }
	   l--;
	   a[l]='\0';
	   i--;
       }
    }
    printf("%s",a);
    getch();
}