#include<stdio.h>
#include<stdlib.h>
int main()
{
      int at[20],bt[20],ct[20],tat[20],wt[20],p[20];
      int i,j,n,temp;
      float avgt=0,avgw=0;
      printf("Vashisth Zatakia 60003200163\n");
      printf("Enter number of processes:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
	     printf("Arrival time and burst time for P%d:",i+1);
	     scanf("%d %d",&at[i],&bt[i]);
	     p[i]=i+1;
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
	    if(i==0 || at[i]>ct[i-1])
	    {
		     ct[i]=at[i]+bt[i];
	    }
	    else ct[i]=ct[i-1]+bt[i];
	    tat[i]=ct[i]-at[i];
	    wt[i]=tat[i]-bt[i];
	    avgt+=tat[i];
	    avgw+=wt[i];
      }
      printf("Process Arrival Burst   Completion TurnAround Waiting\n");
      for(i=0;i<n;i++)
      {
	     printf("P%d\t%d\t%2d	%d\t   %d\t      %d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
      }
      printf("Average Waiting Time=%f\n",avgw/n);
      printf("Average TurnAround Time=%f",avgt/n);
	  return 0;
}