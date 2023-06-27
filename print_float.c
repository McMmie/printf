#include "main.h"
#include <unistd.h>

/**
 * print_float - prints floating point numbers
 * @val: a floating point number
 * @prec: precision value
 *
 * Return: nothing
 */

void print_float(double val, int prec)
{
	/*printing the integer part*/
	int num = (int)val;
	char buffer[20]; /*to be adjusted to needed size*/

	print_int(num, buffer, 10);
	write(STDOUT_FILENO, buffer, _strlen(buffer));

	/*printing the decimal point*/
	char decimal = '.';

	write(STDOUT_FILENO, &decimal, 1);

	/*printing the remaining decimal part*/
	if (val < 0)
	{
		val = -val;
	}
	double rightside = val - (double)num;

	for (int i = 0; i < prec; i++)
	{
		rightside *= 10;
		int digit = (int)rightside;
		char digChar = '0' + digit;

		write(STDOUT_FILE, &digChar, 1);
		rightside -= digit;
	}
}
