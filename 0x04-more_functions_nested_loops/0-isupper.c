#include "main.h"

/**
 * _isupper - checks if c is upper
 * @c: int to check
 * Return: Always 0.
 */
int _isupper(int c)
{
	int b;

	if (c >= 'A' && c <= 'Z')
	{
		b = 1;
	}
	else
		b = 0;
	return (b);
}
