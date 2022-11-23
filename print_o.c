#include "main.h"
/**
 * print_o - prints an integer in base 8
 * @args: variadic arguments for the int
 * Return: length of the int so it can be printed
 */
int print_o(va_list args)
{
	char *ptr;
	int i;

	ptr = convert(va_arg(args, unsigned int), 8);

	if (ptr != NULL)
		i = _puts(ptr);
	else
		i = _puts("NULL");
	return (i);

}
