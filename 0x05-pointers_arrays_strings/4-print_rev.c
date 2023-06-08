#include "main.h"

/**
 * print_rev - prints a string
 * @s: character to print
 * Return: void
 */
void void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
