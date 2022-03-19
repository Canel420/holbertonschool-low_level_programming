#ifndef VARIADICFUNC_H
#define VARIADICFUNC_H

#include <stdarg.h>
#include <stdio.h>

typedef struct print
{
	char *t;
	void (*f)(va_list);
} temp;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADICFUNC_H */
