#include "main.h"

/**
 * main - Entry Point
 * Description: prints 50 fibonacci numbers starting 1 and 2
 * Return: Always (0) on success
 */

int main(void)
{
	int counter;
	unsigned long fibi1 = 0, fibi2 = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = fibi1 + fibi2;
		printf("%lu", sum);

		fibi1 = fibi2;
		fibi2 = sum;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
