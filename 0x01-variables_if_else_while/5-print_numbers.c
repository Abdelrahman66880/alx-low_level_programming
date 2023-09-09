#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the digits from 0 to 9.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}

	printf("\n");

	return (0);
}
