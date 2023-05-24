#include "main.h"
/**
 * times_table - prints 9 timestable
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int r;
	int c = 0;

	while (c < 10)
	{
		r = 0;

		while (r >= 0 && r < 10)
		{
			_putchar(r * 9);
			_putchar(',');
			_putchar(' ');
			r++;
		}
		c++;
		_putchar('\n');
	}
}
