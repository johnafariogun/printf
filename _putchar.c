#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes a char to stdout
 * @c: character
 * Return: Always 0 (on success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
