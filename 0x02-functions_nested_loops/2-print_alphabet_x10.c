#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	char i = 0;

	while (i < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
