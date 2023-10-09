#include "main.h"
#include <stdio.h>

/**
 * char *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: 2nd string
 * @n: unsigned int
 * Return: glued strings with the provided n bytes for 2nd string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1L = 0, s2L = 0;

	char *P;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1L++;
	for (i = 0; s2[i] != '\0'; i++)
		s2L++;

	P = malloc(sizeof(char) * (s1L + n) + 1);
	if (P == NULL)
		return (NULL);
	if (n >= s2L)
	{
		for (i = 0; s1[i] != '\0'; i++)
			P[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			P[s1L + i] = s2[i];
		P[s1L + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			P[i] = s1[i];
		for (i = 0; i < n; i++)
			P[s1L + i] = s2[i];
		P[s1L + i] = '\0';
	}
	return (P);
}

