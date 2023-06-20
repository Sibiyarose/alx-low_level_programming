#include "main.h"
/**
 * prime2 - Makes possible to evalute from 1 to n
 * @a: same as n
 * @b: number that iterates fron 1 to n
 * Return: on success -1
 * on error return -1
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number -checks if a number is prime
 * @n: Integer
 * Return: On success return 1
 * On error return -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
