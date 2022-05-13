#include<stdio.h>
#include<conio.h>
void main()
{
     char a[100],ch;
     int i,l=0,count=0;
     clrscr();
     printf("Enter a string:");
     gets(a);
     printf("Enter the character whose frequency is needed:");
     scanf("%c",&ch);
     while(a[l]!=0)
     {
	 l++;
     }
     for(i=0;i<=l-1;i++)
     {
	 if(a[i]==ch)
	 {
	     count++;
	 }
     }
     printf("Frequency=%d",count);
     getch();
}