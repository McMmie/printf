#include "main.h"

/**
 * _strcpy - copies strings
 * @s1: destination string
 * @s2: source string
 *
 * Return: destination string
 */

char *_strcpy(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
	return (s1);
}

