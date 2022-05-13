#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,d,rev=0,copy;
   clrscr();
   printf("Enter the number:");
   scanf("%d",&n);
   copy=n;
   while(n!=0)
   {
      d=n%10;
      rev=rev*10+d;
      n=n/10;
   }
   if(rev==copy)
   {
   printf("Given number is palindrome");
   }
   else printf("Not a palindrome number");

   getch();
}