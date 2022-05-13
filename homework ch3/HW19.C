#include<stdio.h>
#include<conio.h>
void main()
{
    int i,count=0,age,n;
    float weight;
    clrscr();
    printf("Enter the total number of students:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	 printf("Enter age and weight in kg:");
	 scanf("%d %f",&age,&weight);
	 if(age<20 && weight<50) count++;
    }
    printf("Number of students with given condition are=%d",count);
    getch();
}