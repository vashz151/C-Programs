#include<stdio.h>
#include<conio.h>
void main()
{
     char ch;
     void dis(char);
     clrscr();
     printf("Enter a character:");
     scanf("%c",&ch);
     dis(ch);
     getch();
}
void dis(char x)
{
     printf("Entered character is %c",x);
}



