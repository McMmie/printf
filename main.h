#ifndef MAIN_H
#define MAIN_H
/****FUNCTIONS****/
int _printf(const char *format, ...);

int _putchar(char c);

void print_str(char *s);

char *_strcpy(char *s1, char *s2);

int _strlen(char *s);

void int_to_binary(unsigned int num);

char *print_int(int i, char *outstr, int base);

char *reverse(char *s);

void print_float(double val, int prec);

void print_ptr(void *value);

void rot13(char *str);

char *itoa(int i, char *strout, int base, bool isUnsigned);

int _buffer(char *buff, int size)
#endif
