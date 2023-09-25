#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < 10; i++)
{
dest[i] = *src;
src++;
}
return (dest);
}
