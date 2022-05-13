#inlcude<stdio.h>
#inlcude<conio.h>
void main()
{
int n1,n2,difference;
clrscr();
printf("Enter the two numbers");
scanf("%d %d",&n1,&n2);
if(n1>n2)
difference=n1-n2;
else
difference=n2-n1;
printf("Difference between the two numbers is %d",difference);
getch();
}
