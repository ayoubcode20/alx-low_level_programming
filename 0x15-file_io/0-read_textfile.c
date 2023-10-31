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
	if (!filename)
		return (0);
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	char *buff = malloc(sizeof(char) * letters);

	if (!buff)
	{
		close(fd);
		return (0);
	}
	ssize_t bytes_read = read(fd, buff, letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	ssize_t bytes_written = write(STDOUT_FILENO, buff, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buff);
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (bytes_written);
}
