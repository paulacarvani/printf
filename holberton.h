#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct format - struct
 * @fn: puntero
 * @f: puntero
 */
typedef struct format
{
	char *fn;
	int (*f)(va_list);
} f_ok;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get(const char *charc, int pos))(va_list);
int print_string(va_list list);
int print_char (va_list list);
void _printinteger(long n);
int print_decimal(va_list list);
int print_int(va_list list);

#endif
