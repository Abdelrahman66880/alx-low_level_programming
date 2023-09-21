#include "main.h"

/**
 *_strcmp - compares two strings
 *@s1: A pointer to a character that will be changed
 *@s2: A pointer to a character that will also be changed/modified/updated
 *Return: dest
 */

int _strcmp(char *s1, char *s2)
{
char *i = s1;
char *j = s2;
while (*i != '\0' && *j != '\0' && *i == *j)
{
i++;
j++;
}
return (*i - *j);
}
