#include <stdio.h>

/**
 * main - prints the name of the first file it was compiled from
 *
 * Return: 0(always success)
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
