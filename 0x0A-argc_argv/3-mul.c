#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that multiplies two numbers
 * @argc: int
 * @argv: pointer to arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
