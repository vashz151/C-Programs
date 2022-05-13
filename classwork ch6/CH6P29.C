#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int l=0,i,count=0;
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[l]!='\0')
	{
		l++;
	}
	for(i=0;i<=l-1;i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		count++;
	}
	printf("Number of vowels is:%d",count);
	getch();
}
