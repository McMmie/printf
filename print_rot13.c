#include "main.h"

/**
 * rot13 - converts the string to the rot13 version
 *@str: the string to be converted
 *
 * Return: nothing
 */

void rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
			{
				str[i] = str[i] + 13;
			}
			else
				str[i] = str[i] - 13;

		}
		i++;
	}
}
