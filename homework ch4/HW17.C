#include<stdio.h>
#include<conio.h>
void main()
{
   int age;
   float weight;
   clrscr();
   printf("Enter the donor's age in years and weight in kg:");
   scanf("%d%f",&age,&weight);
   if(age>18 && age<55)
   {
      if(weight>50)
      {
	 printf("Eligible for blood donation");
      }
      else goto done;
   }
   else done:printf("Not eligible for blood donation");
   getch();
}