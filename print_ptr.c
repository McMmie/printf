#include "main.h"

/**
 * print_ptr - prints pointers
 * @value: a void pointer
 *
 * Return: nothing
 */

void print_ptr(void *value)
{
	uintptr_t ptr = (uintptr)value;
	char buffer[16];

	for (int i = 0; i < 8; i++)
	{
		int digit = (ptr >> (28 - 4 * i)) & 0xF;

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
