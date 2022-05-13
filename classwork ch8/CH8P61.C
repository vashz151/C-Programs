#include<stdio.h>
#include<conio.h>
struct Circle
{
	float radius;
	struct
	{
		float x,y;
	}centre;
};
void main()
{
	struct Circle c;
	clrscr();
	printf("Enter the Circle's radius and co-ordinates of centre:");
	scanf("%f %f %f",&c.radius,&c.centre.x,&c.centre.y);
	printf("Radius=%f\nCentre:(%f,%f)",c.radius,
	c.centre.x,c.centre.y);
	getch();

}