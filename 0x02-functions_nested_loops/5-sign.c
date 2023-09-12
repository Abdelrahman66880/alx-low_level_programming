#include "main.h"

/**
 * print_sign - Entry point
 *
 * @n: the number that should be checked
 *
 * Return: Always 0 (success)
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(49);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar('-');
_putchar('1');
return (-1);
}


}
