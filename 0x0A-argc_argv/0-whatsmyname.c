#include <stdio.h>

/**
 * main - program that prints it own name
 * @argc: number of arguments
 * @argv: arrat with arguments
 * Return: Alwayas 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
