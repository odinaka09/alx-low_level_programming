#include "main.h"
/**
 * rev_string - reverse something
 * @s: params
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int len = 0;
	char k;

	while (s[len] != '\0')
	{
		len++;
	}
	for (j = len - 1; j >= i; j--)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
		i++;
	}
	_putchar('\n');
}
