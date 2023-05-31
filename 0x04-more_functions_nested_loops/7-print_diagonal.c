#include "main.h"

/**
 * print_diagonal - prints a line
 * @n: int to print amount of times
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		a = 1;
		while (a <= n)
		{
			b = 1;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
}
