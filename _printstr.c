#include "main.h"
void _printstr(char *s)
{
	int count;
	for(count = 0; s[count] != '\0'; count++)
	{
		_putchar(s[count]);
	}
}
