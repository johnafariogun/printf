#include "main.h"
/**
 * print_b - prints an integer in base 2
 * @args: variadic arguments for the int
 * Return: length of the int so it can be printed
 */
int print_b(va_list args)
{
	char *ptr;
	int i;

	ptr = convert(va_arg(args, unsigned int), 2);

	if (ptr != NULL)
		i = _puts(ptr);
	else
		i = _puts("NULL");
	return (i);

}
