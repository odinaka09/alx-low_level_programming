#include "main.h"

/**
 * _strncpy - copy two strings
 * @dest: string to be copied
 * @src: string to copy
 * @n: max number of bytes to be used from src
 * Return: copied string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0'
		i++;
	}

	return (dest);
}
