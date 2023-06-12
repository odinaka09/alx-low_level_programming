#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = o;
	while (dest[i])
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
