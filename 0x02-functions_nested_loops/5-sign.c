#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: the int to check
 * Return: 1 and print + if n is greater than 0
 * 0 and print 0 if n is 0
 * -1 and print - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
