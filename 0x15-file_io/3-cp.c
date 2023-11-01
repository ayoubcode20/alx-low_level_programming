#include "main.h"

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
	int bytes_rd, bytes_wr, FR, FW;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	FR = open(argv[1], O_RDONLY);
	FW = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((bytes_rd = read(FR, buff, BUFF_SIZE)) > 0)
	{
		if (bytes_rd == -1)
		{
			close(FW);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_wr = write(FW, buff, bytes_rd);
		if (bytes_wr == -1 || bytes_wr != bytes_rd)
		{
			close(FR);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(FR) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FR);
		exit(100);
	}
	if (close(FW) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", FW);
		exit(100);
	}
	return (0);
}
