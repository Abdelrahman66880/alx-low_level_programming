#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print reversable alphapetic
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
