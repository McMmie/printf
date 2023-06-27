#include "main.h"

/**
 * int_to_binary - converts unsigned int into binary
 * @num: unsigned int
 *
 * Return: binary number
 */

int int_to_binary(unsigned int num)
{
	int array[24], i;

	if (num == 0)
	{
		printf("0");
	}
	i = 0;

	while (num > 0)
	{
		array[i++] = num % 2;
		num /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", array[j];
	}

}
