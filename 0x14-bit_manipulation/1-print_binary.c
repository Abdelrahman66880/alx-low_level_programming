#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
int i;
int flag = 0;
int bits = sizeof(unsigned long int) * 8;
if (n == 0)
{
printf('0');
}

for (i = bits - 1; i >= 0; i--)
{
if ((n >> i) & 1)
{
printf('1');
flag = 1;
}
else if (flag)
{
printf('0');
}
}
}
