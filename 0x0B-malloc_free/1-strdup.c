#include "main.h"

/**
 * *_strdup - function that returns pointer to newly allocated space in memory
 *@str: poiniter to string
 *Return: pointer to newly duplicated string
 */

char *_strdup(char *str)
{
	int i, index;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
		;

	dup = malloc(index * sizeof(*str) + 1);

	if (dup == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < index; i++)
			dup[i] = str[i];
	}
	return (dup);
}
