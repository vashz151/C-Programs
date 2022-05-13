#include<stdio.h>
#include<conio.h>
struct patient
{
     char fname[20],mname[20],lname[20],dob[20],dis[20];
};
void main()
{
     struct patient p[100];
     char x[20];
     int i,n,k;
     printf("Enter number of patients:");
     scanf("%d",&n);
     for(i=0;i<=n-1;i++)
     {
	 printf("Enter first,middle and last name,date of birth and disease:");
	 flushall();
	 gets(p[i].fname);
	 gets(p[i].mname);
	 gets(p[i].lname);
	 gets(p[i].dob);
	 gets(p[i].dis);
     }
     printf("Enter disease whose patient are to be listed:");
     scanf("%s",x);
     printf("Patient with said diseases are:\n");
     for(i=0;i<=n-1;i++)
     {
	  for(k=0;x[k]!=0;k++)
	  {
	      if(x[k]!=p[i].dis[k]) break;
	  }
	  if(x[k]==0) printf("%s %s %s\n",p[i].fname,p[i].mname,p[i].lname);
     }
     getch();
}
