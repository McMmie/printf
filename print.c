#include <stdio.h>
#include <stdbool.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 *
 * Return: void
 */

void print_char(char c)
{
	write(1, &c, 1);
}

/**
 *_printf - This is a complete replica of the printf function
 *@format: The arguements formats
 *
 *Return: always zero
 */

int _printf(const char *format, ...)
{
	va_list vl;
	int i = 0, j = 0, k;
	char buff[100] = {0}, tmp[20];
	char *str_arg;
	const char *str = format;

	va_start(vl, format);
	while (str && str[i])
	{
		if ((str[i] == '%' && str[i + 1] == 'r'))
		{
			buff[j] = '%';
			buff[j + 1] = 'r';
			j++;
		}
		else if (str[i] == '%')
		{
			i++;
			switch (str[i])
			{
				/* Convert char */
				case 'c':
					{
						buff[j] = (char)va_arg(vl, int);
						j++;
						break;
					}
				/* Convert decimal */
				case 'd':
					{
						print_int(va_arg(vl, int), tmp, 10);
						_strcpy(&buff[j], tmp);
						j += _strlen(tmp);
						break;
					}
				case 'i':
					{
						print_int(va_arg(vl, int), tmp, 10);
						_strcpy(&buff[j], tmp);
						j += _strlen(tmp);
						break;
					}
				/* Convert unsigned decimal */
				case 'u':
					{
						_itoa(va_arg(vl, int), tmp, 10, true);
						_strcpy(&buff[j], tmp);
						j += _strlen(tmp);
						break;
					}
				/* Convert unsigned octal */
				case 'o':
					{
						_itoa(va_arg(vl, int), tmp, 8, true);
						_strcpy(&buff[j], tmp);
						j += _strlen(tmp);
						break;
					}
				case 'x':
					{
						_itoa(va_arg(vl, int), tmp, 16, true);
						_strcpy(&buff[j], tmp);
						for (k = j; buff[k] != '\0'; k++)
						{
							to_lower(buff);
						}
						j += _strlen(tmp);
						break;
					}
				case 'X':
					{
						_itoa(va_arg(vl, int), tmp, 16, true);
						_strcpy(&buff[j], tmp);
						j += _strlen(tmp);
						for (k = j; buff[k] != '\0'; k++)
						{
							to_upper(buff);
						}
						break;
					}
				case 'p':
					{
						_itoa(va_arg(vl, int), tmp, 8, false);
						_strcpy(&buff[j], tmp);
						j += _strlen(tmp);
						break;
					}
				case '%':
					{
						buff[j] = '%';
						j++;
						break;
					}
				/* copy string */
				case 's':
					{
						str_arg = va_arg(vl, char *);
						_strcpy(&buff[j], str_arg);
						j += _strlen(str_arg);
						break;
					}
				case 'b':
					{
						int_to_binary(va_arg(vl, int));
					}
				}
			}
		else
		{
			buff[j] = str[i];
			j++;
		}
		i++;
		}
	write(fileno(stdout), buff, j);
	va_end(vl);
	return (j);
}
