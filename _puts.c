#include "main.h"
/**
 * _puts - prints string
 * @str: input string
 * Return: the length
 */
int _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		i++;
	}

	return (i);
}
