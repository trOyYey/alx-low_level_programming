#include <stdio.h>

/**
 * main - Entry Point
 * Description: computes the sum of all multi of 3 and 5
 * Return: Always 0 on success
 */

int main(void)
{
	int sum, numb;

	for (numb = 0; numb < 1024; numb++)
	{
		if ((numb % 3 == 0) || (numb % 5 == 0))
			sum += numb;
	}
	printf("%d\n", sum);

	return (0);
}
