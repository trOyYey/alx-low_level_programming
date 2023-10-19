#include "lists.h"

void _before_main(void) __attribute__ ((constructor));

/**
 * before_main - run before the main function
 * Return: voidin
 */

void _before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
