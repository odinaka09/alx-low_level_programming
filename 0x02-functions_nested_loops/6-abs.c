#include "main.h"
/**
 * _abs - prints absolute value
 * @n: the character to check
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int b;

	if (n >= 0)
	{
		b = n;
	}
	else
	{
		b = n * -1;
	}
	return (b);
}
