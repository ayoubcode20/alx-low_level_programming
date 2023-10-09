#include "main.h"

/**
 * main - entry point that multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 incates success
*/

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
