#include "main.h"

/**
 *_strchr - searches for the first occurrence of the character c
 *@s: this is the string to be scanned
 *@c: this is the character to be searched in s
 *Return: 0
 */

char *_strchr(char *s, char c)
{
	int love = 0;/*Love was assigned 0*/

	while (s[love] != 0) /*if s is not equal to 0*/

	{
		if (s[love] == c)/*if s[love] is  equal or not to c*/

			return (s + love); /*return value if ture*/

	love++;

	}

	if (c == 0) /* if c is equal or not to 0*/

		return (s + love); /*return value if true*/

	return (0);

}
