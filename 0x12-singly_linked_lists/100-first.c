#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - prints a string before the
 * main function is executed
 */
void hare(void)
{
	printf("You're bear! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
