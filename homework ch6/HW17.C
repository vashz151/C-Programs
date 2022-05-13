#include<stdio.h>
#include<conio.h>
void main()
{
	float a[10][4];
	int i,j,n,ctr=0;
	clrscr();
	printf("Enter number of men:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter height, weight, age and chest width:");
		scanf("%f %f %f %f",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i][0]>=5.2 && a[i][0]<=5.6 && a[i][1]>=45 && a[i][1]<=60 && a[i][2]>=18 && a[i][2]<=25 && a[i][3]>=40) ctr++;
	}
	printf("%d men satisfy the given conditions",ctr);
	getch();

}