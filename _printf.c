#include "main.h"
/**
 * _printf - prints stuff
 * @format: string that contains what to print and how to do it
 * @...: parameters placeholoder
 * Return: Always 0 (on success)
 */
int _printf(const char *format, ...)
{
	int i;
	va_list argp;

	if (format == NULL)
		return (-1);
	/* this blocks checks the varaidaic variables and appropriates*/
	/* the right function from a struct to be used to print the function*/

	va_start(argp, format);
	i = controller(format, argp);

	va_end(argp);

	return (i);
}
