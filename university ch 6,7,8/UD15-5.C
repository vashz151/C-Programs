#include<stdio.h>
#include<conio.h>
void main()
{
     int n,a[100],i,x;
     clrscr();
     printf("Enter the number of elements:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
		printf("Enter a number:");
		scanf("%d",&a[i]);
     }
     printf("Enter the number to be searched:");
     scanf("%d",&x);
     for(i=0;i<=n-1;i++)
     {
		if(a[i]==x) break;
     }
     if(i==n) printf("Not found");
     else printf("Found at index:%d",i);
     getch();
}
