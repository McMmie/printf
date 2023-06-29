#include "main.h"

/**
 * to_lower - prints ctring in lowercase
 * @s: string to be lowered
 *
 * Return: void
 */

char *to_lower(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}

		i++;
	}
	return (s);
}
