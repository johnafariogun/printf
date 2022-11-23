#include "main.h"
/**
 * print_X - prints an integer in base 16
 * @args: variadic arguments for the int
 * Return: length of the int so it can be printed
 */
int print_X(va_list args)
{
	char *ptr;
	int i;

	ptr = convert(va_arg(args, unsigned int), 16);
	ptr = _isupper(ptr);

	if (ptr != NULL)
		i = _puts(ptr);
	else
		i = _puts("NULL");
	return (i);

}
