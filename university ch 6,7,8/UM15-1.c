#include<stdio.h>
#include<conio.h>
void main()
{
      char a[100];
      int i,len=0,count=0;
      clrscr();
      printf("Enter a string:");
      gets (a);
      while (a[count]!=0)
      {
	  count++;
      }
      for (i=0;i<=count-1;i++)
      {
	    switch(a[i])
	    {
		  case 'a':len ++;
		  break;
		  case 'e':len ++;
		  break;
		  case 'i':len ++;
                  break;
		  case 'o':len ++;
                  break;
		  case 'u':len ++;
                  break;
		  case 'A':len ++;
                  break;
		  case 'E':len ++;
		  break;
		  case 'I':len ++;
		  break;
		  case 'O':len ++;
                  break;
		  case 'U':len ++;
		  break;
           }
      }
      printf("No of values = %d\n",len);
      getch();
}