#include "main.h"

/**
 * read_textfile - function that reads textfile and prints it to POSIX stdout
 * @filename: pointer to file
 * @letters: number of letters it should read and print
 * Return: 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int cl;
	ssize_t bytes;
	char BUFF[READ_BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	cl = open(filename, O_RDONLY);
	if (cl == -1)
		return (0);
	bytes = read(cl, &BUFF[0], letters);
	bytes = write(STDOUT_FILENO, &BUFF[0], bytes);
	close(cl);
	return (bytes);
}
