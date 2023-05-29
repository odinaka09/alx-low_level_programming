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
		while (a < size)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
			a++;
		}
	}
}
