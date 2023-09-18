#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	for (; *str != '\0'; str++)
	{
		len++;
	}

	return (len);
}
