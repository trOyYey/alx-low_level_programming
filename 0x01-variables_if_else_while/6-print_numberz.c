#include <stdio.h>

/**
 * main - Entry Point
 * Description: Print single digit using putchhar and int variable
 * Return: Always 0
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/* converting digit to ASCII based*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
