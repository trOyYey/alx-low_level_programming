#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that finds the first occurence of the substring
 * @haystack: string
 * @needle: pointer
 * Return: pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - i] > '\0'; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
