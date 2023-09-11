#include <stdio.h>

/**
 * main - Entry Point
 * Description: printing single digit numbers
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
