#include<stdio.h>
#include<conio.h>
void main()
{
     int age;
     clrscr();
     printf("Enter the age:");
     scanf("%d",&age);
     if(age>=18)
     {
	printf("Eligible for voting");
     }
     else
     {
	printf("Ineligible for voting");
     }
     getch();
}