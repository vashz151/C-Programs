#include<stdio.h>
#include<conio.h>
void main()
{
    int l=0,i;
    char a[100];
    clrscr();
    printf("Enter name:");
    gets(a);
    while(a[l]!=0)
    {
       l++;
    }
    printf("Alphabet ASCII value\n");
    for(i=0;i<=l-1;i++)
    {
	printf("%c\t %d\n",a[i],a[i]);
    }
    getch();
}
