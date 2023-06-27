#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 *_printf - This is a complete replica of the printf function
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
			/*prints character*/
		case 'c':
			_putchar(va_arg(arg, int));
			break;
			/*prints string*/
		case 's':
			s = va_arg(arg, char *);
			print_str(s);
			break;
		/*prints the '%' character*/
		case '%':
			_putchar('%');
			break;
			/*prints integer*/
		case 'i':
			print_int(va_arg(arg, int), ,10);
			break;
			/*prints decimal integer*/
		case 'd':
			print_int(va_arg(arg, int), ,10);
			break;
			/*prints binary integer*/	
		case 'b':
			int_to_binary(va_arg(arg, unsigned int));
			break;
			/*prints reversed string*/
		case 'r':
			s = va_arg(arg, char *);
			print_str(reverse(s));
			break;
			/*prints float values*/
		case 'f':
			print_float(va_arg(arg, double), );
			break;
			/*prints rot13'ed function*/
		case 'R':
			s = va_arg(arg, char *);
			rot13(s);
			print_str(s);
			break;
			/*prints pointer address*/
		case 'p':
			print_ptr(va_arg(arg, *void));
			break;
		}
	}
	va_end(arg);
	return (0);
}
