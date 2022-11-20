#include "main.h"
/**
 * convert - numbers to the right base
 * @num: the number
 * @base: the right base
 * Return:
 */
char *convert(unsigned int num, int base)
{
	static const char reps[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr  = reps[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
