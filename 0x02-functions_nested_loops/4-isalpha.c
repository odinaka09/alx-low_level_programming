#include "main.h"
/**
 * _isalpha - checks if lower
 * @c: the character to check
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	int b;

	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
