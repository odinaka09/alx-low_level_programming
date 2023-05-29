#include "main.h"

/**
 * print_line - prints a line
 * @n: int to print amount of times
 * Return: Always 0.
 */
void print_line(int n)
{
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		b = 1;
		while (b <= n)
		{
			_putchar('_');
			b++;
		}
	_putchar('\n');
	}
}
