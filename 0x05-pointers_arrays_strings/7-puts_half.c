#include "main.h"

/**
 * puts_half - function that prints half of a string followed by new line
 *@str: input
*Return: nothin
*/

void puts_half(char *str)
{
	int i, count = 0, n;

	for (i = 0; str[i] != 0; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1; str[i] != '\0';)
		_putchar(str[i]);
	_putchar('\n');
}
