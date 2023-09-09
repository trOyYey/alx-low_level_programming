#include <stdio.h>

/**
 * main - Entry Point
 * Description: Print alphabets letters
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
