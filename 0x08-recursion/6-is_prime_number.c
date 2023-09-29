#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that checks if input is prime number
 * @n: input
 * @n2: 2nd input
 * Return: 1 if true, 0 otherwise
 */

int prime_check(int n, int n2);
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - check if number < n if they can be divided
 * @n: input as int
 * @n2: 2nd int
 * Return: final calculating as int
 */

int prime_check(int n, int n2)
{
	if (n2 >= n && n > 1)
		return (1);
	else if (n % n2 == 0 || n <= 1)
		return (0);
	else
		return (prime_check(n, n2 + 1));
}
