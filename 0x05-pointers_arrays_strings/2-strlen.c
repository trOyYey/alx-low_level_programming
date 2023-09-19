#include "main.h"

/**
 * _strlen - function that returns lenght of a string
 *@s : input
* Return: lenght of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
