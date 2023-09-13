#include <main.h>

/**
 * jack_bauer - function that prints every minute of the day
 */

void jack_bauer(void)
{   //we can either use 2 int or 4,it's easier to understand with 4
	// but it takes less lines with only 2
	int min, hr;
	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <=59; min++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
