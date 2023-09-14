#include "main.h"

/**
 * print_times_table - function that prints times table of n
 * @n: input value
 */

void print_times_table(int n)
{
	int result, multi, digit;

	if (n <= 15 && n >= 0)
	{
		for (digit = 0; digit <= n; digit++)
		{
			_putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				result = digit * multi;

				if (result <= 9)
					_putchar(' ');
				if (result <= 99)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				} else if (result <= 99 && result >= 10)
					_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		_putchar('\n');
	}
}
