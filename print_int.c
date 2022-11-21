#include "main.h"
/**
 * print_int - prints an integer in base 10
 * @args: variadic arguments for the int
 * Return: length of the int so it can be printed
 */
int print_int(va_list args)
{
	char *ptr;
	int i;

	ptr = convert(va_arg(args, int), 10);

	if (ptr != NULL)
		i = _puts(ptr);
	else
		i = _puts("NULL");	
	return (i);
	
}
