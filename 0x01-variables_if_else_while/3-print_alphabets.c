#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 97;
	char b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while  (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
