#include <unistd.h>
#include "main.h"

/**
 * _buffer - this is a local character buffer
 * @buff: holds string to print
 * @size:  length of string
 *
 * Return: length of string
 */

int _buffer(char *buff, int size)
{
	if (size > 1024)
	{
		write(STDOUT_FILENO, buff, size);
		size = 0;
	}

	return (size);
}
