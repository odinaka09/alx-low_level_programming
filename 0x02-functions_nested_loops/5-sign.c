#include "main.h"
/**
 * print_sign - prints sign
 * @n: the character to check
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	int b;

	if (n > 0)
	{
		b = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		b = 0;
		_putchar('0');
	}
	else
	{
		b = -1;
		_putchar('-');
	}
	return (b);
}
