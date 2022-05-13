#include<stdio.h>
#include<conio.h>
void main()
{
  int c=0,a=0,i=0,e=0,o=0,u=0,A=0,I=0,E=0,O=0,U=0;
  char s[100];
  clrscr();
  printf("Input a string:");
  gets(s);
  while (s[c]!='\0')
  {
     if (s[c]=='a') a++;
     else if(s[c]=='A') A++;
     else if(s[c]=='e') e++;
     else if(s[c]=='E') E++;
     else if(s[c]=='i') i++;
     else if(s[c]=='I') I++;
     else if(s[c]=='o') o++;
     else if(s[c]=='O') O++;
     else if(s[c]=='u') u++;
     else if(s[c]=='U') U++;
     c++;
  }
  if(a>0) printf("a=%d\n",a);
  if(A>0) printf("A=%d\n",A);
  if(e>0) printf("e=%d\n",e);
  if(E>0) printf("E=%d\n",E);
  if(i>0) printf("i=%d\n",i);
  if(I>0) printf("I=%d\n",I);
  if(o>0) printf("o=%d\n",o);
  if(O>0) printf("O=%d\n",O);
  if(u>0) printf("u=%d\n",u);
  if(U>0) printf("U=%d\n",U);
  getch();
}