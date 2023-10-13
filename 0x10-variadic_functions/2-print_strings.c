#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i
va_list arr;
char *str;
va_start(arr, n);
for (i = 0; i < n; i++)
{
str = va_arg(arr, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
