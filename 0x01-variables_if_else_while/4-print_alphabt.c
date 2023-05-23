#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 97;

	while (a < 123)
	{
		if (a == 101 || a == 102)
			continue;
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
