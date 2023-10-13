#include "variadic_functions.h"

/**
 * format_char - prints The char
 *
 * @sp: seperator
 * @ap: The arugments list
 *
 * Return: void
*/

void format_char(char *sp, va_list ap)
{
	printf("%s%c", sp, va_arg(ap, int));
}

/**
 * format_string - prints a string
 *
 * @sp: a seperator
 * @ap: The arguments list
 *
 * Return: void
*/

void format_string(char *sp, va_list ap)
{
	char *str = va_arg(ap, char*);

	switch ((int)(!str))
		case (1):
			str = "(nil)";
	printf("%s%s", sp, str);
}

/**
 * format_int - prints an integer
 *
 * @sp: seperator
 * @ap: The arugments list
 *
 * Return: void
*/

void format_int(char *sp, va_list ap)
{
	printf("%s%d", sp, va_arg(ap, int));
}

/**
 * format_float - prints a float
 *
 * @sp: a seperator
 * @ap: The arguments list
 *
 * Return: void
*/

void format_float(char *sp, va_list ap)
{
	printf("%s%f", sp, va_arg(ap, double));
}

/**
 * print_all - function that prints anything.
 *
 * @format: The format
 *
 * Return: void
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sp = "";
	va_list ap;
	_tokens tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"s", format_string},
		{"f", format_float},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].ch)
		{
			if (format[i] == tokens[j].ch[0])
			{
				tokens[j].f(sp, ap);
				sp = ", ";
			}
			j++;
		}
		i++;
	}
}
