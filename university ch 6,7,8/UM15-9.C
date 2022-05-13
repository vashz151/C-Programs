#include<stdio.h>
void main()
{
    int x=20,y,*ip;
    ip=&x;
    y=(*ip)++;
    printf("%d\n",y);
    printf("%d\n",*ip);
    y=++x*(*ip);
    printf("%d\n",y);
    printf("%d\n",*ip);
}