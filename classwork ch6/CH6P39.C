#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int l=0,i,countv=0,countc=0,counts=0,countd=0;
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[l]!=0)
	{
		l++;
	}
	for(i=0;i<=l-1;i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||
		a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'
		||a[i]=='O'||a[i]=='u'||a[i]=='U')
		countv++;
		else if(a[i]==' ') counts++;
		else if(a[i]>='0' && a[i]<='9') countd++;
		else if((a[i]>='a' && a[i]<='z') ||
		(a[i]>='A'&&a[i]<='Z'))
		countc++;
	}
	printf("Number of vowels is:%d\n",countv);
	printf("Number of consonants is %d\n",countc);
	printf("Number of digits is %d\n",countd);
	printf("Number if spaces is %d\n",counts);
	getch();
}
