#include "main.h"
/**
 * print_char - this prints a char
 * @args: the variadic arguments
 * Return: 1 on success
 */

int print_char(va_list args)
{
	int output;

	output = va_arg(args, int);
	_putchar(output);

	return (1);
}
