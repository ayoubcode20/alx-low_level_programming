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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	int FR = open(argv[1], O_RDONLY)
}
