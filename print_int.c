#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_int - converts strings to integer
 * @i: integer
 * @outstr: output string
 * @base: base digit
 *
 * Return: character pointer
 */

char *print_int(int i, char *outstr, int base)
{
	int num, sign = 0;

	char *s = outstr;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}
	while (i)
	{
		num = i % base;
		*s = (num > 9) ? ('A' + num - 10) : '0' + num;
		i = i / base;
		s++;
	}
	if (sign)
	{
		*s++ = '-';
	}
	*s = '\0';
	reverse(outstr);
	return (outstr);
}
