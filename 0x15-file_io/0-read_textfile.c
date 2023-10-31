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
	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	char *buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	ssize_t bytesRead = fread(buffer, 1, letters, file);

	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == -1 || bytesWritten != bytesRead)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return (bytesWritten);
}
