#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],b[100];
	int i,l=0,j=0,k;
	clrscr();
	printf("Enter a string:");
	gets(a);
	while(a[l]!=0)
	{
		l++;
	}
	for(i=0;i<=l;i++)
	{
		if(a[i]==' ' || a[i]==0)
		{
			for(k=l-i;j<=i;j++,k++)
			{
				b[k]=a[j];
			}
		}
	}
	b[k-1]=' ';
	b[l]=0;
	printf("Reverse string is:%s",b);
	getch();
}
