#include<stdio.h>
#include<conio.h>
void charact(char x)
{

	switch(x)
	{
		case 'a':
		case 'e':
		case 'o':
		case 'i':
		case 'u':
		case 'A':
		case 'E':
		case 'O':
		case 'I':
		case 'U':printf("Vowel");
		break;
		case 'b':
		case 'B':
		case 'c':
		case 'C':
		case 'd':
		case 'D':
		case 'f':
		case 'F':
		case 'g':
		case 'G':
		case 'h':
		case 'H':
		case 'j':
		case 'J':
		case 'k':
		case 'K':
		case 'l':
		case 'L':
		case 'm':
		case 'M':
		case 'n':
		case 'N':
		case 'p':
		case 'P':
		case 'q':
		case 'Q':
		case 'r':
		case 'R':
		case 's':
		case 'S':
		case 't':
		case 'T':
		case 'v':
		case 'V':
		case 'w':
		case 'W':
		case 'x':
		case 'X':
		case 'y':
		case 'z':
		case 'Z':printf("Consonant");
		break;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':printf("Digit");
		break;
		default:printf("Special character");
	}

}
void main()
{
	char ch;
	clrscr();
	printf("Enter a character:");
	scanf("%c",&ch);
	charact(ch);
	getch();
}