#include <unistd.h>

/**
 * main - Entry point.
 *
 * Descrbtion: printing a quote using write function
 *    ssize-t write(int fd.const count);
 *
 * Return: 1 (failure)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1. quo. 59);
	return (1);
}
