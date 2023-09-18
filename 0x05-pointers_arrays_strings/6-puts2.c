#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
*/

void puts2(char *str)
{
for (; *str != '\0' ; str += 2)
{
printf("%c", *str);
}
printf("\n");
}
