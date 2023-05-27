#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: int to check
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int b;

	if (c >= '0' && c <= '9')
	{
		b = 1;
	}
	else
		b = 0;
	return (b);
}
