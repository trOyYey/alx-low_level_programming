#include "main.h"

/**
 * *_strlen - function that finds lenght of a string
 *@s: string
 *Return: number as int
 */

int _strlen(char *s)
{
	int size;

	for(size = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - function that concates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer of newly allocated two strings
 */

char *_strdup(char *str)
{
	int index1, index2, i;
	char *P;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	index1 = _strlen(s1);
	index2 = _strlen(s2);
	P = malloc((index1 + index2) *sizeof(char) + 1);
	if(P == 0)
		return (0);

	for (i = 0; i <= index1 + index2; i++)
	{
		if (i < index1)
			P[i] = s1[i];
		else
			P[i] = s2[i - index1];
	}
	P[i] = '\0';
	return (P);
}
