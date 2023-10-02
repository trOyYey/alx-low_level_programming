#include <stdio.h>

/**
 * main - program that prints all arguments it recieves
 * @argc: int
 * @argv: pointers to arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
