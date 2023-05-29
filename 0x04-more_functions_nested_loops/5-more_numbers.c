#include "main.h"

/**
 * more_numbers - prints more numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char c;
	int b;

	b = 0;
	while (b < 10)
	{
		c = '0'
		while (c < '15')
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
		b++;
	}
}
