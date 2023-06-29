#ifndef MAIN_H
#define MAIN_H
#include <stdbool.h>
#include <stdint.h>
/****FUNCTIONS****/
int _printf(const char *format, ...);

int _putchar(char c);

void print_str(char *s);

char *_strcpy(char *s1, char *s2);

int _strlen(char *s);

/*void int_to_binary(unsigned int num);*/

char *print_int(int i, char *outstr, int base);

char *reverse(char *s);

void print_float(double val, int prec);

void print_ptr(void *value);

/*void rot13(char *str);*/

char *_itoa(int i, char *strout, int base, bool isUnsigned);

int _buffer(char *buff, int size);

char *to_upper(char *str);

char *to_lower(char *str);

void int_to_binary(unsigned int num);

#endif
