#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int i;
    clrscr();
    printf("Enter a character:");
    scanf("%c",&ch);
    for(i=1;i<=26;i++)
    {
       if(ch=='A'+i-1) break;
    }
    if(i<=26) printf("Position=%d",i);
    else printf("Its not a character between A to Z");
    getch();
}