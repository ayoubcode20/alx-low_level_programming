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
	int res;
	int (*ptr)(int, int)

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && argv[3] == "0")
	{
		printf("Error\n");
		exit(100);
	}

	ptr = get_op_func(argv[2]);
	res = ptr(atoi(argc[1]), atoi(argc[3]));

	printf("%d\n", res);

	return (0);
}
