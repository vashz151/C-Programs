#include<stdio.h>
#include<conio.h>
void main()
{
   int choice;
   float years;
   clrscr();
   printf("Enter the number of years:");
   scanf("%f",&years);
   printf("1.Months\n2.Days\n3.Hours\n4.Minutes\n5.Seconds\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:printf("It is %f months",years*12);
       break;
       case 2:printf("It is %f days",years*365);
       break;
       case 3:printf("It is %f hours",years*365*24);
       break;
       case 4:printf("It is %f minutes",years*365*24*60);
       break;
       case 5:printf("It is %f seconds",years*365*24*60*60);
       break;
       default:printf("Invalid choice");
   }
   getch();
}