#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints every minute starting from 00:00 to 23:59.
 *
 * Return: Always 0 (success)
*/

vioid printJackBauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}
