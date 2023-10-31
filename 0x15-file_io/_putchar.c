#include "main.h"

/**
 * _putchar - write a char to stdout
 * @c: a character
 *
 * Return: 1 on success, otherwise -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
