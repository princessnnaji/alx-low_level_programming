#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: counter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list plus;

	int sum = 0;

	unsigned int a = 0;

	if (n == 0)
		return (0);

	va_start(plus, n);/* Initialize the argument list.*/

	for (a = 0; a < n; a++)
		sum += va_arg(plus, int);/* Get the next argument value.*/

	va_end(plus); /*clean up*/
	return (sum);
}
