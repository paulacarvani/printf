#include "holberton.h"
/**
 * _printf - llamar a diferentes funciones
 * @format: puntero
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
int i;
int cont = 0;
va_list arg;
va_start(arg, format);
for (i = 0; format[i]; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '%')
{
_putchar(37);
cont++;
i++;
}
else if (get(format, i + 1) != NULL)
{
cont += (get(format, i + 1))(arg);
i++;
}
}
else
{
_putchar(format[i]);
cont++;
}
}
va_end(arg);
return (cont);
}
