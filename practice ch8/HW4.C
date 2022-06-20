#include<stdio.h>
#include<conio.h>
struct car
{
    int reg;
    char model[20],manfact[100];
    float mileage;
};
struct car s[100],temp;
void mod(int choice,int n)
{
    int i,j;
    printf("List according to the model name:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(strcomp(s[j].model,s[j+1].model)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Model Name Manufacturer Registration Number Average Mileage\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t\t%s\t\t%d\t\t%f\n",s[i].model,s[i].manfact,s[i].reg,s[i].mileage);
	}

}
void man(int choice,int n)
{
    int i,j;
    printf("List according to the manfacturer:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(strcomp(s[j].manfact,s[j+1].manfact)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Model Name Manufacturer Registration Number Average Mileage\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%f\n",s[i].model,s[i].manfact,s[i].reg,s[i].mileage);
	}
}
void reno(int choice,int n)
{
    int i,j;
    printf("List according to the registration number:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(strcomp(s[j].reg,s[j+1].reg)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Model Name Manufacturer Registration Number Average Mileage\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%f\n",s[i].model,s[i].manfact,s[i].reg,s[i].mileage);
	}
}
void mil(int choice,int n)
{
    int i,j;
    printf("List according to mileage:\n");
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(strcomp(s[j].mileage,s[j+1].mileage)>0)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	printf("Model Name Manufacturer Registration Number Average Mileage\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%s\t%s\t%d\t%f\n",s[i].model,s[i].manfact,s[i].reg,s[i].mileage);
	}
}
int strcomp(char a[100],char b[100])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=b[i]) return(a[i]-b[i]);
	}
	if(a[i]==b[i]) return 0;
	return(a[i]-b[i]);
}
void main()
{
	int i,n,choice;
	float m;
	clrscr();
	printf("Enter the number of cars:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter model name,manufacturer,registration number and average mileage:");
		flushall();
		gets(s[i].model);
		gets(s[i].manfact);
		scanf("%d %f",&s[i].reg,&m);
		s[i].mileage=m;
	}
	printf("1.Model name\n2.Manufacturer\n3.Registration number\n4.Average mileage\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	   case 1:mod(choice,n);
	   break;
	   case 2:man(choice,n);
	   break;
	   case 3:reno(choice,n);
	   break;
	   case 4:mil(choice,n);
	   break;
	   default:printf("Invalid choice");
	}
	getch();

}