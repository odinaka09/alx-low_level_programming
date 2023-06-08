#include "main.h"

/**
 * print_rev - prints a string
 * @s: character to print
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[i] != '\0')
	{
		length++;

	}

	for (i = length - 1; i > 0; i--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
