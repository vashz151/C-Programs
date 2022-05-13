#include<stdio.h>
#include<conio.h>
void main()
{
    float p,interest;
    float prin(float);
    clrscr();
    printf("Enter the principal amount:");
    scanf("%f",&p);
    interest=prin(p);
    printf("The total interest is=%f",interest);
    getch();
}
float prin(float principal)
{
    float i;
    if(principal<8000) i=0.16*principal;
    else if(principal<=9999&&principal>=8000) i=0.18*principal;
    else i=0.2*principal;
    return i;
}