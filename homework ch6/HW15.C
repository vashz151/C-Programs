#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,a[10],b[10],c[10],n,r1,temp,r2;
    clrscr();
    for(i=0;i<=9;i++)
    {
	printf("Enter roll number of stduent %d:",i+1);
	scanf("%d",&a[i]);
	printf("Enter marks of student %d:",i+1);
	scanf("%d",&b[i]);
	c[i]=b[i];
    }
    for(i=0;i<=8;i++)
    {
	for(j=0;j<=8-i;j++)
	{
	    if(b[j]<b[j+1])
	    {
		temp=b[j];
		b[j]=b[j+1];
		b[j+1]=temp;
	    }
	}
    }
    for(i=0;i<=9;i++)
    {
	if(c[i]==b[0])
	{
	    r1=i;
	}
	if(c[i]==b[1])
	{
	    r2=i;
	}
    }

    printf("Rank 1 is stduent %d with roll number %d and Rank 2 is student %d with rollnumber %d",r1+1,a[r1],r2+1,a[r2]);
    getch();
}
