#include<stdio.h>
#include<stdlib.h>
int f=-1,r=-1;
void insert(int *queue,int v,int n)
{
      if(f==-1 && r==-1)
      {
	     f=r=0;
	     queue[r]=v;
      }
      else
      {
	     r++;
	     queue[r]=v;
      }
}
int deleteF(int *queue)
{
      int x;
      x=queue[f];
      if (f==r) f=r=-1;
      else f++;
      return x;
}
int main()
{
      int at[20],bt[20],ct[20],tat[20],wt[20],p[20],rem_bt[20],c[20],*queue;
      int i,j,n,t=0,q,cp=0;
      float avgt=0,avgw=0;
      printf("Vashisth Zatakia 60003200163\n");
      printf("Enter number of processes:");
      scanf("%d",&n);
      queue=(int *) malloc(n*sizeof (int));
      for(i=0;i<n;i++)
      {
	     printf("Arrival time and burst time for P%d:",i+1);
	     scanf("%d %d",&at[i],&bt[i]);
	     p[i]=i+1;
	     wt[i]=0;
	     rem_bt[i]=bt[i];
	     c[i]=0;
      }
      printf("Enter time quantum:");
      scanf("%d",&q);
      while(j!=1)
      {
	     for(i=0;i<n;i++)
	     {
		    if(at[i]<=t)
		    {
			   insert(queue,i,n);
			   c[i]=1;
			   j=1;
			   break;
		    }
	     }
	     if(i==n) t++;
      }
      while(cp!=n)
      {
	     i=deleteF(queue);
	     if(rem_bt[i]>=q)
	     {
		     t+=q;
		     rem_bt[i]-=q;
	     }
	     else
	     {
		    t+=rem_bt[i];
		    rem_bt[i]=0;
	     }
	     for(j=0;j<n;j++)
	     {
		    if(c[j]==0 && at[j]<=t)
		    {
			   insert(queue,j,n);
			   c[j]=1;
		    }
	     }
	     if(rem_bt[i]==0)
	     {
		    ct[i]=t;
		    tat[i]=ct[i]-at[i];
		    wt[i]=tat[i]-bt[i];
		    avgw+=wt[i];
		    avgt+=tat[i];
		    cp++;
	     }
	     else
	     {
		    insert(queue,i,n);
	     }
      }
      printf("Process Arrival Burst Completion TurnAround Waiting\n");
      for(i=0;i<n;i++)
      {
	     printf("P%d\t%d\t%d     %2d\t %2d\t    %d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
      }
      printf("Average Waiting Time=%f\n",avgw/n);
      printf("Average TurnAround Time=%f",avgt/n);
	  return 0;
}