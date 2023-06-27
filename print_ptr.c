#include "main.h"
#include <stdint.h>
/**
 * print_ptr - prints pointers
 * @value: a void pointer
 *
 * Return: nothing
 */

void print_ptr(void *value)
{
	uintptr_t ptr = (uintptr_t)value;
	char buffer[16];
	int i;
	int digit;

	for (i = 0; i < 8; i++)
	{
		digit = (ptr >> (28 - 4 * i)) & 0xF;

		if (digit < 10)
		{
			buffer[i] = '0' + digit;
		}
		else
		{
			buffer[i] = 'A' + digit - 10;
		}
	}
	buffer[8] = '\0';
	print_str(buffer);
}
