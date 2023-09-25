#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length of occurrence.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
while (*s != '\0')
{

char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
i++;
break;
}
a++;
}
if (*a == '\0')
break;
s++;
}
return (i);
}
