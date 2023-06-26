#include <stdio.h>
#include "../main.h"
int main(void)
{
	char alpha = 'a';
	char string[] = "string";
	printf("this is a string\n");
	_printf("this is a string\n");
	printf("%c  \n", alpha);
	_printf("%c  \n", alpha);
	printf("%s\n", string);
	_printf("%s\n", string);
	_printf("%c \n", alpha);
	printf("%c \n", alpha);
	printf("%c \n", alpha);
	return (0);
}
