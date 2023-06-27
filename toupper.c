#include "main.h"

/**
 * _toupper - converts string to uppercase
 * @str: string to convert
 *
 * Return: uppercase string
 */

char *_toupper(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')

			str[i] = (str[i] - 32);

		i++;
	}
	return (str);
}
