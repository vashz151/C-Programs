#include<stdio.h>
#include<conio.h>
void main()
{
    int n,count;
    int Count(int);
    clrscr();
    printf("Enter the total number of students:");
    scanf("%d",&n);
    count=Count(n);
    printf("Number of students with given condition are=%d",count);
    getch();
}
int Count(int n)
{
    int i,c=0,age;
    float weight;
    for(i=1;i<=n;i++)
    {
	 printf("Enter age and weight in kg:");
	 scanf("%d %f",&age,&weight);
	 if(age<20 && weight<50) c++;
    }
    return c;
}