#include<stdio.h>
#include<conio.h>
void main()
{
     char a[100],ch;
     int i,l=0;
     clrscr();
     printf("Enter a string:");
     gets(a);
     printf("Enter the character whose occurence needs to be detected:");
     scanf("%c",&ch);
     while(a[l]!=0)
     {
	 l++;
     }
     for(i=0;i<=l-1;i++)
     {
	 if(a[i]==ch)
	 {
	     printf("Found at index %d\n",i);
	 }
     }
     getch();
}