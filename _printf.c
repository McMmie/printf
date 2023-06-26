#include <stdarg.h>
#include "main.h"
/**
 *_printf - This is a complets replica of the printf function
 *@format: The arguements formats
 *
 *Return: always zero
 */
int _printf(const char *format, ...)
{
	const char *countchar;
	char *s;
	va_list arg;

	va_start(arg, format);
	for (countchar = format; *countchar != '\0'; countchar++)
	{
		while (*countchar != '%' && *countchar != '\0')
		{
			_putchar(*countchar);
			countchar++;
		}
		countchar++;
		switch (*countchar)
		{
		case 'c':
			_putchar(va_arg(arg, int));
			break;
		case 's':
			s = va_arg(arg, char *);
			_printstr(s);
			break;
		case '%':
			_putchar('%');
			break;
		}
	}
	va_end(arg);
	return (0);
}
