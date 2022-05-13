#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,a[100],choice,temp;
     clrscr();
     printf("Enter number of elements:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	 printf("Enter an element:");
	 scanf("%d",a+i);
     }
     printf("1.Rotate right\n2.Rotate Left\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
	 case 1:temp=a[n-1];
		for(i=n-1;i>=0;i--)
		{
		   a[i+1]=a[i];
		}
		a[0]=temp;
		printf("After rotating right the new array is as follows:\n");
	 break;
	 case 2:temp=a[0];
		for(i=0;i<=n-2;i++)
		{
		    a[i]=a[i+1];

		}
		a[n-1]=temp;
		printf("After rotating left the new array is as follows:\n");
	 break;
	 default:printf("Invalid choice");
     }
     for(i=0;i<=n-1;i++)
     {
	 printf("%d\n",a[i]);
     }
     getch();
}