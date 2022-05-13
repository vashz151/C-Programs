#include<stdio.h>
#include<conio.h>
struct Student
{
	int roll_no;
	float fees;
	char name[20];
};
void main()
{
	struct Student s;
	clrscr();
	printf("Enter name, roll number and fees:");
	gets(s.name);
	scanf("%d %f",&s.roll_no,&s.fees);
	printf("Name:%s\nRoll Number:%d\nFees:%f\n",
	s.name,s.roll_no,s.fees);
	getch();

}