#include "main.h"


/**
 * SERR - print error to stdror
 * @s: int
 * @a: pointer to string
 */
void SERR(int s, char *a)
{
	if (s == 0)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else if (s == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	else if (s == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", a);
		exit(99);
	}
}

/**
 * error_close - close if error print
 * @n: fp
 */
void error_close(int n)
{
	if (close(n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
		exit(100);
	}
}
/**
 * main - checks the input
 * @ac: counter of arguments
 * @av: a pointer to string pointers
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int f[2], p;
	char buff[1024];
	mode_t p2 = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		SERR(0, av[0]);
	f[0] = open(av[1], O_RDONLY);
	if (f[0] == -1)
		SERR(1, av[1]);
	f[1] = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, p2);
	if (f[1] == -1)
		SERR(2, av[2]);
	p = read(f[0], buff, 1024);
	while (p > 0)
	{
		if (write(f[1], buff, p) < 0)
			SERR(2, av[2]);
		p = read(f[0], buff, 1024);
	}
	if (p == -1)
		SERR(1, av[1]);
	error_close(f[0]);
	error_close(f[1]);
	return (0);
}
