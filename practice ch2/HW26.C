#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	int marital;
	clrscr();
	printf("Enter name:");
	scanf("%s",&name);
	printf("1.Married\n2.Not Married\nEnter your choice:");
	scanf("%d",&marital);
	(marital==1)?printf("Mrs. %s",name):printf("Miss %s",name);
	getch();
}