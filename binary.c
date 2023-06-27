#include "main.h"

/**
 * int_to_binary - converts unsigned int into binary
 * @num: unsigned int
 *
 * Return: binary number
 */

void int_to_binary(unsigned int num)
{
	int arraynum[24], i,j;

	if (num == 0)
	{
		_putchar(0);
	}
	i = 0;

	while (num > 0)
	{
		arraynum[i++] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arraynum[j]);
	}

}
