#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
void *x;
if (b != NULL)
{
x = malloc(b);
}
else
{
exit(98);
}
return (x);
}
