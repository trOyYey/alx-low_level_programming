#include <stdio.h>

/**
 * main - Entry Point
 * Description:  Program that prints numbers in base of 16 in lowercase
 * Return: Always 0
 */

int main(void)
{
	int digit = 48; /*48 deicmal rep of "0"*/

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
