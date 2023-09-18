#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
*/

void print_array(int *a, int n)
{
	int nums = 0;

	for (int i = 0; i < n; i++)
	{
		nums++;
		printf("%i", a[i]);
		if (nums < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
