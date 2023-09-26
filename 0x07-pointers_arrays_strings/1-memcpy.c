#include "main.h"

/**
 * _memcpy - function that copies memory to area
 *@dest: memory area to copy to
 *@src: memory area to copy from
 *@n: bytes to use
 *Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unisigned int itr:

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
