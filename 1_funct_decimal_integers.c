#include "holberton.h"
/**
 * print_int - Entry point
 *@list: list
 * Return: Always 0
 */
int print_int(va_list list)
{
int i = va_arg(list, int);
_putchar(i % 10 + '0');
printf("AQUI ESTA %i\n", i);
return (0);
}

/**
 * print_decimal - Entry point
 *@list: list
 * Return: Always 0
 */
int print_decimal(va_list list)
{
int d = va_arg(list, int);
_printinteger(d);
return (0);
}
