#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

    n = get_bit(12, 3);
    printf("%d\n", n);
    n = get_bit(9, 0);
    printf("%d\n", n);
    n = get_bit(64, 238934100);
    printf("%d\n", n);
    return (0);
}
