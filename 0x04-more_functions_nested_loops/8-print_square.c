#include "main.h"

/**
 * print_square - prints a line
 * @size: int to print amount of times
 * Return: Always 0.
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		a = 0;
		while (a <= size)
		{
			b = 0;
			while (b < a)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
