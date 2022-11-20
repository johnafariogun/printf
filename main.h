#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *);
int check(char str);
int print_int(va_list args);
char *convert(unsigned int num, int base);
int _strlen(char *);
int print_str(va_list);
int print_char(va_list);
int controller(const char *str, va_list args);
int specifier_c(const char *str, va_list args, int *i);
/**
 * struct format - a struct that contains the type and flags for specifier
 *
 * @type: the format specifier
 * @flag: the specifier function
 */
typedef struct format
{
	char type;
	int (*flag)(va_list);
} specifier;

#endif
