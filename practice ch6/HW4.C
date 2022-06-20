#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[100],b[100],m,n,len;
    clrscr();
    printf("Enter the number of elements for a and b:");
    scanf("%d %d",&m,&n);
    printf("Enter elements of a:");
    for(i=0;i<=m-1;i++)
    {
	 scanf("%d",&a[i]);
    }
    printf("Enter elements of b:");
    for(i=0;i<=n-1;i++)
    {
	scanf("%d",&b[i]);
    }
    printf("Entered elements in column format is as follows:\n");
    len=(m>n)?m:n;
    for(i=0;i<=len;i++)
    {
       if(i<m) printf("%d",a[i]);
       if(i<n) printf("\t%d",b[i]);
       printf("\n");
    }
    getch();
}