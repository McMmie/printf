#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <stdbool.h>

/**
 *_printf - This is a complete replica of the printf function
 *@format: The arguements formats
 *
 *Return: always zero
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0, k;
	const char *countchar;
	char *s;
       char buff[100] = {0}, tmp[20];

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
			print_int(va_arg(arg, int),tmp, 10);
			break;
			/*prints decimal integer*/
		case 'd':
			{
			print_int(va_arg(arg, int), tmp, 10);
			break;
			}
			/*prints octal*/
		case 'o':
			{
				_itoa(va_arg(arg, int), tmp, 8, true);
				_strcpy(&buff[j], tmp);
				j += _strlen(tmp);
			}
			/*prints hexadecimal*/
		case 'x':
			{
				_itoa(va_arg(arg, int), tmp, 16, true);
				_strcpy(&buff[j], tmp);
				j += _strlen(tmp);
			}
			/*prints hexadecimal in uppercase*/
		case 'X':
			{
				_itoa(va_arg(arg, int), tmp, 16, true);
				_strcpy(&buff[j], tmp);
				for (k = j; buff[k] !='\0'; k++)
					buff[k] = _toupper(buff[k]);
			}
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
		case 'o':
			break;
		case 'u':
			break;
		case 'x':
			break;
		case 'X':
			break;
			/*adds the long length modifiers*/
		case 'l':
			countchar++;
			switch (*countchar)
			{
			case 'd':
				break;
			case 'i':
				break;
			case 'u':
				break;
			case 'o':
				break;
			case 'x':
				break;
			case 'X':
				break;
			}
			countchar--;
			/*adds the short length modifiers*/
		case 'h':
			countchar++;
			switch (*countchar)
			{
			case 'd':
				break;
			case 'i':
				break;
			case 'u':
				break;
			case 'o':
				break;
			case 'x':
				break;
			case 'X':
				break;
			}
			countchar--;
		}
	}
	write(fileno(strout), &buff, j)
	va_end(arg);
	return (j);
}
