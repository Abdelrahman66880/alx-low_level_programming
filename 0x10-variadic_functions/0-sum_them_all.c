#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
*/

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
int i;
va_list arr;
int sum = 0;
va_start(arr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arr, int);
}
va_end(arr);
return (sum);
}
