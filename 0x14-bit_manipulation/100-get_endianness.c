#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	uint32_t num = 1;
	uint8_t *byte = (uint8_t *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
