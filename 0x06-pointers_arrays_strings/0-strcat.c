#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int b = 0, c = 0;

	while (dest[b] != '\0')
		b++;

	while (src[c] != '\0')
	{
	dest[b] = src[c];
	b++;
	c++;
	}
	dest[b] = '\0';

	return (dest);
}
