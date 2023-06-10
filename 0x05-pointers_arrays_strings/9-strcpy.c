#include "main.h"

/**
 * _strcpy - copies string
 * @dest: argument pointer
 * @src: argument pointer
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *c;

	*c = *src;
	*dest = *c;

	return (dest);
}
