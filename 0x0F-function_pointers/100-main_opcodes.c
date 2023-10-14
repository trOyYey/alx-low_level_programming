#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - scan the code for students
 * @argc: number or arguments
 * @argv: char pointer
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *P = (char *)main;
	int i;

	if (argc != 2)
		printf("Error\n"), exit(1);
	i = atoi(argv[1]);
	if (i < 0)
		printf("Error\n"), exit(2);

	while (i--)
		printf("%02hhx%s", *P++, i ? " " : "\n");
	return (0);
}
