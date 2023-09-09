#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all the digit numbers by using putchar.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
