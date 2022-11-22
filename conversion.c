#include "main.h"
/**
 * convert - numbers to the right base
 * @num: the number
 * @base: the right base
 * Return: the number converted positive or negative
 */


char *convert(long int num, int base)
{
	static const char reps[] = "0123456789ABCDEF";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	long int temp = num;

	if (num < 0)
	{
		temp *= -1;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr  = reps[temp % base];
		temp /= base;
	} while (temp != 0);

	if (sign)
	{
		*--ptr = sign;
	}

	return (ptr);
}
