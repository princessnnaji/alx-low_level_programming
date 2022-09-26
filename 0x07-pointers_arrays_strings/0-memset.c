#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set to the value.
 * Return: pointer to the memory s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int love = 0; /*Love is my variable and was assigned 0*/

	while (n > 0) /*as long as n is less than zero*/
	{
		s[love] = b; /*love is assigned to our char*/

		love++; /*post-increment, value first incremented afterwards*/
		n--; /*post-decrement*/
	}
	return (s); /*returning pointer to the memory of s*/
}
