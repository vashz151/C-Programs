#include<stdio.h>
#include<conio.h>
void main()
{
      int at[20],bt[20],ct[20],tat[20],wt[20],p[20],pr[20],c[20];
      int i,j,k,n,temp,min,st=0,cp=0;
      float avgt=0,avgw=0;
      clrscr();
      printf("Vashisth Zatakia 60003200163\n");
      printf("Enter number of processes:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
	     printf("Arrival time,burst time and priority for P%d:",i+1);
	     scanf("%d %d %d",&at[i],&bt[i],&pr[i]);
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
			   temp=pr[j];
			   pr[j]=pr[j+1];
			   pr[j+1]=temp;
		    }
	     }
      }
      while(cp!=n)
      {
	     j=n;
	     min=100;
	     for(i=0;i<n;i++)
	     {
		    if(at[i]<=st && pr[i]<min && c[i]==0)
		    {
			   min=pr[i];
			   j=i;
		    }
	     }
	     if(j==n) st++;
	     else
	     {
		    ct[j]=st+bt[j];
		    st+=bt[j];
		    tat[j]=ct[j]-at[j];
		    wt[j]=tat[j]-bt[j];
		    avgt+=tat[j];
		    avgw+=wt[j];
		    cp++;
		    c[j]=1;
	     }
      }
      printf("Process Arrival Burst   Priority Completion TurnAround  Waiting\n");
      for(i=0;i<n;i++)
      {
	     printf("P%d\t%d\t%d\t%d\t %d\t    %d\t\t%d\n",p[i],at[i],bt[i],pr[i],ct[i],tat[i],wt[i]);
      }
      printf("Average Waiting Time=%f\n",avgw/n);
      printf("Average TurnAround Time=%f",avgt/n);
      getch();
}