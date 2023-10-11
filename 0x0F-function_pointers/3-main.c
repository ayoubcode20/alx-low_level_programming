#include "3-calc.h"

/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: The arguments passed
 *
 * Return: 0 incicating success
*/

int main(int argc, char **argv)
{
	int (*ptr)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == "/" || argv[2][0] == "%") && !b)
		printf("Error\n"), exit(100);

	printf("%d\n", ptr(a, b));

	return (0);
}
