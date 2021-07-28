#include "holberton.h"

/**
 *print_char - print the option %c
 *@list: list
 *Descripcion: Funciones de las task 0 y 1
 *Return: the function char
 */
int print_char (va_list list)
{
char c = va_arg(list, int);
_putchar(c);
return (1);
}

/**
 *print_string - print the option %s
 *@list: list
 *Return: The function string
 */

int print_string(va_list list)
{
char *s = va_arg(list, char *);
int i;
for (i = 0; s[i]; i++)
{
_putchar(s[i]);
}
return (i);
}
