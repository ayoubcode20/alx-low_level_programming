#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: nothing
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
