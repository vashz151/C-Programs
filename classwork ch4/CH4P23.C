#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1;
	clrscr();
	for(;;)
	{
		if(i>3) break;
		else j+=i;
		printf("%d\n",j);
		i+=j;
	}
	getch();
}












