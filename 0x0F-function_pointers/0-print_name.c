#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: string
 * @f: pointer to function that prints
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
