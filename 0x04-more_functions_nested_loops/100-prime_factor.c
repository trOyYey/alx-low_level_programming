#include <stdio.h>

/**
 * _sqrt - finds the square root
 * @x: input number
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and prints the largest
*			prime factor of number (num)
*@num: number to find
*/

void largest_prime_factor(long int num)
{
	int prmnu, largest;

/* first divide with smallest prime number (2) */
	while (num % 2 == 0)
		num = num / 2;
	/*num must be odd so we proceed to the next prime number*/
	for (prmnu = 3; prmnu <= _sqrt(num); prmnu += 2)
	{
		while (num % prmnu == 0)
		{
			num = num / prmnu;
			largest = prmnu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
