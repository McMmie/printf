#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * reverse - reverses a string
 * @s: strung to be reversed
 *
 * Return: A pointer to a character
 */

char *reverse(char *s)
{
	int i, j = 0;
	char c;

	if (!s)
	{
		return (NULL);
	}
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < (j / 2); i++)
	{
		c = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = c;
	}
	return (s);
}

