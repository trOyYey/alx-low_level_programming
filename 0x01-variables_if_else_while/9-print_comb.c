#include <stdio.h>

/**
 * main - Entry Point
 * Description:
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		diggit++;
	}
	putchar('\n');

	return (0);
}
