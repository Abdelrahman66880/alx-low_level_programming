#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arr;
va_start(arr, n);
int i;
for (i = 0; i < n; i++)
{
if (i < n - 1)
{
printf("%d", va_arg(arr, int));
printf("%c ", *separator);
}
else
{
printf("%d", va_arg(arr, int));
}
}
}
