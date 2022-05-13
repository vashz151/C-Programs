#include<stdio.h>
#include<conio.h>
struct book
{
     char title[20],author[20];
     float price;
};
void main()
{
     struct book b[100],temp;
     float x;
     int i,n,j;
     clrscr();
     printf("Enter number of books:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	  printf("Enter title,author and price:");
	  flushall();
	  gets(b[i].title);
	  gets(b[i].author);
	  scanf("%f",&x);
	  b[i].price=x;
     }
     for(i=0;i<=n-2;i++)
     {
	  for(j=0;j<=n-2-i;j++)
	  {
	       if(b[j].price>b[j+1].price)
	       {
		    temp=b[j];
		    b[j]=b[j+1];
		    b[j+1]=temp;
	       }
	  }
     }
     printf("Title\tAuthor\tPrice\n");
     for(i=0;i<=n-1;i++)
     {
	  printf("%s\t%s\t%f\n",b[i].title,b[i].author,b[i].price);
     }
     getch();
}

