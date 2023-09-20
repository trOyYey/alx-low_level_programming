#include "main.h"

/**
 * *_strcpy - function that copies the string pointed by
*				src
*@dest: input buffer
*@src: pointed string input
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}	while (scr[i] != '\0');

	return (dest);
}
