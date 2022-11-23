#include "main.h"
/**
 * _isupper - capitalizes a string character
 * @c: the input string
 * Return:  the string in uppercase
 */
char *_isupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}
