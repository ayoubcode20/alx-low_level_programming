#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: the file
 * @letters: number of letters it should read and print
 *
 * Return:  number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	char *str = malloc(sizeof(char) * letters);

	if (!str)
	{
		close(fd);
		return (0);
	}
	ssize_t bytes_read = read(fd, str, letters);

	if (bytes_read == -1)
	{
		free(str);
		close(fd);
		return (0);
	}
	ssize_t bytes_wrriten = 0;

	while (*str)
		bytes_wrriten += _putchar(str++);
	if (bytes_wrriten == -1 || bytes_wrriten != bytes_read)
	{
		free(str);
		close(fd);
		return (0);
	}

	free(str);
	close(fd);
	return (bytes_wrriten);
}
