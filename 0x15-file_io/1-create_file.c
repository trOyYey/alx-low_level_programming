#include "main.h"

/**
 * _strlen - function that calculates the lenght of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - function that creates a file
 * @filename: const char
 * @text_content: char
 * Return: 1 on succes -1 on failure or filename is null
 */

int create_file(const char *filename, char *text_content)
{
	int cl;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	cl = open(filename, O_WRONLY |O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (cl == -1)
		return (-1);
	if (len)
		bytes = write(cl, text_content, len);
	close(cl);
	return (bytes == len ? 1 : -1);
}
