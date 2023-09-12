#include "main.h"

/**
 * _abs - Entry point
 *
 * @c: the number that should be converted
 *
 * Return: Always 0 (success)
*/

int _abs(int c)
{
if (c <= 0)
{
int result = c * -1;
_putchar(result + 48);
}
else
{
_putchar(c + 48);
}
}
