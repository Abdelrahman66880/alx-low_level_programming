#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphapet in lower and upper case
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char letter = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
