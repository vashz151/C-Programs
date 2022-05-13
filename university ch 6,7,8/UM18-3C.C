#include<stdio.h>
#include<conio.h>
void main()
{
     int choice;
     float bill,p;
     clrscr();
     printf("1.Transistor\n2.Capacitor\n3.Resistor\nEnter your choice:");
     scanf("%d",&choice);
     printf("Enter price per piece:");
     scanf("%f",&p);
     switch(choice)
     {
	  case 1:if(p>1000)
		 {
		       bill=0.90*p;
		 }
		 else bill=p;
	  break;
	  case 2:if(p>100) bill=0.95*p;
		 else bill=p;
	  break;
	  case 3:if(p>500) bill=0.9*p;
		 else bill=p;
	  break;
	  default:printf("Onvalid choice");
     }
     printf("Total bill amount:%f",bill);
     getch();
}
