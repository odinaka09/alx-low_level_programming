#include "main.h"
/**
 * _islower - checks if lower
 * @c: the character to check
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int b;

	if (c >= 'a' && c <= 'z')
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
