#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of an int: %d byte(s)", (int)sizeof(a));
	printf("Size of a long int: %d byte(s)", (int)sizeof(b));
	printf("Size of a long long int: %d byte(s)", (int)sizeof(c));
	printf("Size of a char: %d byte(s)", (int)sizeof(d));
	printf("Size of a float: %d byte(s)", (int)sizeof(e));
	return (0);
}
