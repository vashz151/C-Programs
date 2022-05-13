#include<stdio.h>
#include<conio.h>
void computer1()
{
	clrscr();
	printf(" Detailed Configuration Computer A\n");
	printf(" Processor: Intel i5-10100K\n RAM: 8GB\n SSD: WD512GB + HDD: WD1TB\n Video Card: Nvidia 710GT 2GB\n Cost = Rs.75000\n");

}
void computer2()
{
	clrscr();
	printf(" Detailed Configuration Computer B\n");
	printf(" Processor: Intel i7-10100K\n RAM: 16GB\n SSD: Samsung1TB \n Video Card: Nvidia 950GTX 2GB\n Cost = Rs.85000\n");

}
void computer3()
{
	clrscr();
	printf(" Detailed Configuration Computer C\n");
	printf(" Processor: Intel i3-9100F\n RAM: 8GB\n HDD: WD1TB\n Video Card: Nvidia 660GTX 3GB\n Cost = Rs.60000\n");

}
void computer4()
{
	clrscr();
	printf(" Detailed Configuration Computer D\n");
	printf(" Processor: AMD Ryzen 5 5500X\n RAM: 16GB\n SSD: Samsung1TB\n Video Card; AMD Radeon 6000 Series\n Cost = Rs.90000\n");

}

void main()
{
	int choice;
	char input;
	do
	{
		clrscr();
		printf("View Detailed Configuration by entering your choice\n");
		printf("1. Computer A\n2. Computer B\n3. Computer C\n4. Computer D\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: computer1();
				break;
			case 2: computer2();
				break;
			case 3:computer3();
				break;
			case 4:computer4();
				break;

		}
		printf("Do you want to exit configuration menu(y/n)??\n");
		input = getche();
	}while(input != 'y');
	printf("\nTotal Cost of Computers A,B,C,D = Rs.%ld",60000+90000+75000+85000);
	getch();
}