#include "main.h"
/**
 * controller - this handles the format specifics
 * @str: string format gotten from the printf
 * @args: the variadic arguments
 * Return: the number of arguments and the string
 */
int controller(const char *str, va_list args)
{
	int i, j = 0, k;

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			k = specifier_c(str, args, &i);
			if (k < 0)
				return (-1);

			j += k;
			continue;
		}

		_putchar(str[i]);
		j += 1;
	}

	return (j);
}

/**
 * specifier_c - this controls what is to be done based on the specifier
 * @str: string format gotten from the printf
 * @args: variadix arguments
 * @i: index
 * Return: returns the specifier
 */
int specifier_c(const char *str, va_list args, int *i)
{
	int size = 0, no_of_specifiers, j;

	specifier specs[] = {
		{'s', print_str},
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},

	};

	*i = *i + 1;

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	if (str[*i] == '\0')
		return (-1);

	no_of_specifiers = sizeof(specs) / sizeof(specs[0]);
	for (j = 0; j < no_of_specifiers; j++)
	{
		if (str[*i] == specs[j].type)
		{
			size = specs[j].flag(args);
			return (size);
		}
	}

	_putchar('%');
	_putchar(str[*i]);

	return (2);
}
