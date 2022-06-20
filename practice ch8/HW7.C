#include<stdio.h>
#include<conio.h>
union size
{
   int i;
   float m;
   char a[100];
};
void main()
{
    union size s;
    int y,choice;
    clrscr();
    printf("1.Integer variable\n2.Float Variable\n3.Char Array\nEnter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
	 y=sizeof(s.i);
	 printf("Size of Integer variable is %d",y);
    }
    else if(choice==2)
    {
	 y=sizeof(s.m);
	 printf("Size of Float variable is %d",y);
    }
    else if(choice==3)
    {
	 y=sizeof(s.a);
	 printf("Size of Char array variable is %d",y);
    }
    else printf("Invalid choice");
    getch();
}