#include "main.h"
/**
 * _abs - prints absolute value
 * @n: the character to check
 * Return: Always 0 (Success)
 */
int _abs(int n)
{

	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(n * -1);
	}
	return (0);
}
