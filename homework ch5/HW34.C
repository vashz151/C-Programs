#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    void chart(char);
    clrscr();
    printf("Enter a character:");
    scanf("%c",&ch);
    chart(ch);
    getch();
}
void chart(char x)
{
    int i;
    for(i=1;i<=26;i++)
    {
       if(x=='A'+i-1) break;
    }
    if(i<=26) printf("Position=%d",i);
    else printf("Its not a character between A to Z");
}