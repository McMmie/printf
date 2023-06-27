#include <stdbool.h>
#include "main.h"
/**
 * _itoa - prints octal and hexadecimal
 * @i: first parameter
 * @strout: buffer to hold the string
 * @base: the base used
 * @isUnsigned: a boolean to return true or false
 *
 * Return: buffer character string
 */

char *itoa(int i, char *strout, int base, bool isUnsigned)
{
	int digit, sign = 0;
	char *str = strout;

	unsigned int u = (isUnsigned) ? (unsigned int) : (unsigned int)(-(i + 1)) + 1;
		if (i < 0 && !isUnsigned)
		{
			sign = 1;
			u = (-(i + 1)) + 1;
		}
		while (u)
		{
			digit = u % base;
			str = (digit > 9) ? ('A' + digit - 10) : '0' +digit;
			u = u / base;
			str++
		}
		if (sign)
		{
			*str++ = '-';
		}

		*str = '\0';
		reverse(strout);
		return (strout);
}
