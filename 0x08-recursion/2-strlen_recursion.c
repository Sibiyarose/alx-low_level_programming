#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: on success 1
 * on error return -1
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
