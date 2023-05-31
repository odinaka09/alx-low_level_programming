#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer to swap
 * @b: pointer to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
