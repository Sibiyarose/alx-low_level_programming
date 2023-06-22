#include "function_pointers.h"
/**
 * print_name - this function prints a name
 * @name: string to print
 * @f: function pointer, receives a string
 * Return: void function,no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	
	f(name);
}
