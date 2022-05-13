#include<stdio.h>
#include<conio.h>
void main()
{
   int choice;
   clrscr();
   printf("1.Water\n2.Ozone\n3.Oxygen\n4.Petrol\n5.Iron\n6.Ice\n7.Gold\n8.Mercury\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:
       case 4:
       case 8:printf("It is in liquid state");
       break;
       case 2:
       case 3:printf("It is in gaseous state");
       break;
       case 5:
       case 6:
       case 7:printf("It is in solid state");
       break;
       default:printf("Invalid choice");
   }
   getch();
}