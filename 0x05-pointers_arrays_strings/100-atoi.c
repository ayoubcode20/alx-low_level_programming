#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 * Return: The integer value of the input string.
*/

int _atoi(char *s)
{
    int result = 0;
    int sign = 1; 

    while (*s == ' ') {
        s++;
    }

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        if (result > (INT_MAX - (*s - '0')) / 10) {
            if (sign == 1) {
                return INT_MAX;
            } else {
                return INT_MIN;
            }
        }

        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
