#include<stdio.h>
#include<conio.h>
void main()
{
      int i;
      clrscr();
      for(i=1;i<=26;i++)
      {
	 printf("%c%c ",'A'+i-1,'z'-i+1);
      }
      getch();
}