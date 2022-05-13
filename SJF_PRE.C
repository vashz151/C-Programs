#include<stdio.h>
#include<conio.h>
void main()
{
      int at[20],bt[20],ct[20],tat[20],wt[20],p[20],c[20],burst[20];
      int i,j,n,cp=0,min,temp;
      int st=0;
      float avgt=0,avgw=0;
      clrscr();
      printf("Vashisth Zatakia 60003200163\n");
      printf("Enter number of processes:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
	     printf("Arrival time and burst time for P%d:",i+1);
	     scanf("%d %d",&at[i],&bt[i]);
	     p[i]=i+1;
	     c[i]=0;
      }
      for(i=0;i<n-1;i++)
      {
	     for(j=0;j<n-1-i;j++)
	     {
		    if(at[j]>at[j+1])
		    {
			   temp=at[j];
			   at[j]=at[j+1];
			   at[j+1]=temp;

			   temp=bt[j];
			   bt[j]=bt[j+1];
			   bt[j+1]=temp;

			   temp=p[j];
			   p[j]=p[j+1];
			   p[j+1]=temp;
		    }
	     }
      }
      for(i=0;i<n;i++)
      {
	     burst[i]=bt[i];
      }
      while(cp!=n)
      {
	     j=n;
	     min=100;
	     for(i=0;i<n;i++)
	     {
		  if(at[i]<=st && bt[i]<min && c[i]==0)
		  {
			   min=bt[i];
			   j=i;
		  }
	     }
	     if(j==n) st++;
	     else
	     {
		    bt[j]--;
		    st++;
		    if(bt[j]==0)
		    {
			ct[j]=st;
			cp++;
			c[j]=1;
		    }
	     }
      }
      for(i=0;i<n;i++)
      {
	     tat[i]=ct[i]-at[i];
	     wt[i]=tat[i]-burst[i];
	     avgt+=tat[i];
	     avgw+=wt[i];
      }
      printf("Process Arrival Burst   Completion TurnAround Waiting\n");
      for(i=0;i<n;i++)
      {
	     printf("P%d\t%d\t%2d	%2d\t   %2d\t      %d\n",p[i],at[i],burst[i],ct[i],tat[i],wt[i]);
      }
      printf("Average Waiting Time=%f\n",avgw/n);
      printf("Average TurnAround Time=%f",avgt/n);
      getch();
}