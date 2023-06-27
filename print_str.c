#include "main.h"

/**
 * print_str - prints a string
 * @s: string to be printed
 *
 * Return: nothing
 */

void print_str(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		_putchar(s[count]);
	}
}
