#include "main.h"

/**
 * _strlen - count lenght of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - function that concatenates all arguments given
 * @ac: int
 * @av: char
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, nc = 0, j, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = "\0';
	return (s);
}
