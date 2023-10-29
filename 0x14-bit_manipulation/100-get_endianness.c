#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	short int ch = 65;

	if (ch & 1 == 0)
		return (0);
	return (1);
}
