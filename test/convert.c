#include "main.h"
/**
 * _strrev - this helps to reverse a string
 * @str: string to be reversed
 * Return: the string to be reversed
 */
char *_strrev(char *str)
{
	int i;
	int len = 0;
	char c;
	
	if (!str)
		return NULL;

	while(str[len] != '\0')
	{
		len++;
	}
	for(i = 0; i < (len/2); i++)
	{
		c = str[i];
		str [i] = str[len - i - 1];
		str[len - i - 1] = c;
	}
	return str;
}

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
	char *ptr;
	char sign = 0;
	long int temp = num;

	if (num < 0)
	{
		temp *= -1;
		sign = '-';
	}
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr  = reps[num % base];
		num /= base;
	} while (num != 0);

	if (sign)
	{
		*--ptr = sign;
	}

	return (ptr);
}
