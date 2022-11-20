#include "main.h"
/**
 * _puts - prints string
 * @str: input string
 * Return: the length
 */
int _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');

	return (i);
}
