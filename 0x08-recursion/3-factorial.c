#include "main.h"
#include <stdio.h>

/**
 * factorial - gets the factorial of n
 * @n: integer
 * Return: on success 1.
 * On error return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
