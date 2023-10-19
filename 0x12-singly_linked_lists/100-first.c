#include <stdio.h>

void before_main(void) __atribute__((constructor));

/**
 * before_main - run before the main function
 */

void before_main(void)
{
	printf("Youre beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
