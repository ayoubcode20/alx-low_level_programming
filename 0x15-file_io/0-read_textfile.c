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
	int fd;
	ssize_t bytes;
	char *buff = malloc(sizeof(char) * letters);

	if (!filename || !letters || !buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buff, letters);
	bytes = write(STDOUT_FILENO, buff, bytes);
	close(fd);
	return (bytes);
}
