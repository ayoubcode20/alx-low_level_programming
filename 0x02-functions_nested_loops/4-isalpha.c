#include "main.h"

/**
 * _isalpha - checks if character is a letter lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
