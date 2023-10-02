#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: pointer to destination input
 * @src: source pointer
 * Return: pointer resulting of @dest
 */

char *_strcat(char *dest, char *src)
{
	int destL = 0;
	int srcL = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destL++;
	for (i = 0; src[i] != '\0'; i++)
		srcL++;

	for (i = 0; i <= srcL; i++)
		dest[destL + i] = src[i];
	return (dest);

}
