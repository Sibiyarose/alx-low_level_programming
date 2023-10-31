#include "main.h"

/**
 * print_alphabet - print aplhabet
 *	in lowercase
 *
 * Return: Always 0(success)
 */

void print_alphabet(void)
{
	char  alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);

		alpha++;
	}

	_putchar('\n');
}
