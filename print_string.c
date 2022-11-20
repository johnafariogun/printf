#include "main.h"
/**
 * print_str - this prints a string
 *
 * @args: the variadic arguments
 * Return: the string
 */
int print_str(va_list args)
{
	char *ptr;
	int string;

	ptr = va_arg(args, char*);
	if (ptr != NULL)
		string = _puts(ptr);
	else
		string = _puts("(null)");

	return (string);
}
