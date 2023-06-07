#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*a = *b;
}
