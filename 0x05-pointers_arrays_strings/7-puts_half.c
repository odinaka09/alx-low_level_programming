#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character to print
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;

	while (str[len] != 0)
		len++;

	if (len % 2 == 1)
		i = len / 2;
	else
		i = (len - 1) / 2;
	
	i++;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
