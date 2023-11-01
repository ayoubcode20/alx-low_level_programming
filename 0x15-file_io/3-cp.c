#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main -  program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the arguments list
 *
 * Return: Always 1 (success)
*/

int main(int argc, char **argv)
{
	char buff[BUFF_SIZE];
	int from_fd = 0, to_fd = 0;
	ssize_t b;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	while ((b = read(from_fd, buff, BUFF_SIZE)) > 0)
		if (write(to_fd, buff, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
	return (0);
}
