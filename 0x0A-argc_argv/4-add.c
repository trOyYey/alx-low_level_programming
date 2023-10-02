#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that adds positive numbers
 * @argc: int
 * @argv: pointer to arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ssum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		ssum += atoi(argv[argc]);
	}
	printf("%d\n", ssum);
	return (0);
}
