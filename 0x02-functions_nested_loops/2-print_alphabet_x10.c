#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char Rose;

	while (i < 10)
	{
		Rose = 'a';
		while (Rose <= 'z')
		{
			_putchar(Rose);
			Rose++;
		}
		_putchar('\n');
		i++;
	}
}
