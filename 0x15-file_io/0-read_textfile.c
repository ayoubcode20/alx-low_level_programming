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
	int c, bytes, count = 0;
	int ptr;

	if (!filename)
		return (0);
	ptr = open(*filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	while (letters > 0 && read(ptr, &c, sizeof(c)) > 0)
	{
		if (write(STDOUT_FILENO, &c, sizeof(c)) != sizeof(c))
		{
			close(ptr);
			return (0);
		}
		count++;
		letters--;
	}
	close(ptr);
	return (count);
}
