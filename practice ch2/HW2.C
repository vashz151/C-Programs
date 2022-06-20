#inlcude<stdio.h>
#inlcude<conio.h>
void main()
{
int n1,n2,subtraction;
clrscr();
printf("Enter the two numbers");
scanf("%d %d",&n1,&n2);
if(n1>n2)
subtraction=n1-n2;
else
subtraction=n2-n1;
printf("Subtaction of the two numbers is %d",subtraction);
getch();
}

