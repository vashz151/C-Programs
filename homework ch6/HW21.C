#include<stdio.h>
#include<conio.h>
void main()
{
    int l=0,i,j;
    char a[100];
    clrscr();
    printf("Enter a string:");
    gets(a);
    while(a[l]!=0)
    {
       l++;
    }
    for(i=0;i<=l-1;i++)
    {
	if(a[i]=='a' || a[i]=='A'|| a[i]=='e' || a[i]=='E' || a[i]=='i'|| a[i]=='I' || a[i]=='o' || a[i]=='O'|| a[i]=='u' || a[i]=='U')
	{
	   for(j=i;j<l-1;j++)
	   {
		a[j]=a[j+1];
	   }
	   l--;
	   a[l]=0;
	   i--;
	}
    }
    printf("The updated string is:\n%s",a);
    getch();
}
