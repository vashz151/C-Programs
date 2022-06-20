#include<stdio.h>
#include<conio.h>
void pat(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
	 for(j=n-i;j>=0;j--)
	 {
	     printf("%d ",j);
	 }
	 printf("\n");
    }
}
void main()
{
    int n;
    clrscr();
    printf("Enter the value of n:");
    scanf("%d",&n);
    pat(n);
    getch();
}
