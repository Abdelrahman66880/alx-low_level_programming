#include "main.h"

/**
 * _isalpha - Entry point
 *
 * @c: the character that should be checked
 *
 * Return: Always 0 (success)
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
return (0);
}
