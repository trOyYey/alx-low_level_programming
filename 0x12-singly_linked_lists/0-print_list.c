#include "lists.h"

/**
 * len - recursive function to find lenght of string
 * @str: character
 * Return: lenght of string
 */

unsigned int  len(const char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + len(str + 1));
}

/**
 * print_list - function that prints all the elements of a list_t
 * @h: pointer to list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (i);
}
