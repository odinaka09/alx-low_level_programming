#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: the character to check
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int b;

	b = n % 10;
	if (b < 0)
	{
		b = -1 * b;
	}
	_putchar(b + '0');
	return (b);
}
