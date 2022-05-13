#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    void pat(int);
    clrscr();
    printf("Enter the number of element in central line:");
    scanf("%d",&n);
    pat(n);
    getch();
}
void pat(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
	 for(j=i;j>=1;j--)
	 {
	    printf("%d ",j);
	 }
	 printf("\n");

    }
    for(i=n;i>=1;i--)
    {
	 for(j=i;j>=1;j--)
	 {
	    printf("%d ",j);
	 }
	 printf("\n");
    }
}