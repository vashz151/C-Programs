#include<stdio.h>
#include<conio.h>
void main()
{
    float principal,interest;
    clrscr();
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    if(principal<8000) interest=0.16*principal;
    else if(principal<=9999&&principal>=8000) interest=0.18*principal;
    else interest=0.2*principal;
    printf("The total interest is=%f",interest);
    getch();
}
