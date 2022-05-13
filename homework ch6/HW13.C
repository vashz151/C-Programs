#include<stdio.h>
#include<conio.h>
void main()
{
     char a[100];
     int i,l=0;
     clrscr();
     printf("Enter a string:");
     gets(a);
     while(a[l]!=0)
     {
	 l++;
     }
     for(i=0;i<=l-1;i++)
     {
	 if(a[i]>='a' && a[i]<='z')
	 {
	     a[i]+='A'-'a';
	 }
     }
     printf("%s",a);
     getch();
}