#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
