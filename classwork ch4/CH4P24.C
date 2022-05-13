#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=0;i<8;i++)
	{
		if(i%2==0)
		printf("%d\n",i+1);
		else if(i%3==0)
		continue;
		else if(i%5==0)
		break;
		printf("\n End of Program \n");
	}
	printf("\n End of program \n");
	getch();
}












