#include "main.h"

/**
 * main - Entry point
 *
 * Description: print all lower case alphabitic letters ten times
 *
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
char x;
int i;
i = 0;

while (i <= 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
i++;
}

}
