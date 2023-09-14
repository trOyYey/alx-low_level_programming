#include <stdio.h>

/**
 * main - Entry Point
 * Description: Prints the sum of even valued fibonaci
*			sequence less than 4mil
 *
 * Return: Always 0 on success
 */

int main(void)
{
	unsigned long fibi1 = 0, fibi2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fibi1 + fibi2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;

		fibi1 = fibi2;
		fibi2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
