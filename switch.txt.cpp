// Program for vowel//


#include<stdio.h>
#include<conio.h>
int main(void)
{

	char chChar;
    printf("enter character\n");
	scanf("%c",&chChar);

	switch(chChar)
{
	case 'a':
	case 'e':
    case 'i':
	case 'o':
	case 'u':

		printf("it is small letter vowel");
        break;
    case 'A':
	case 'E':
    case 'I':
	case 'O':
	case 'U':
		printf("it is capital letter vowel");
        break;
	default:
		printf("it is not vowel");
	}
			getch();
			return 0;
}
