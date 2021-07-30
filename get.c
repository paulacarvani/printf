#include "holberton.h"
/**
 * get - listado especificadores de formato
 * description: mapeamos la función que lo procesa
 * @charc: puntero
 * @pos: variable
 * Return: Always 0.
 */

int (*get(const char *charc, int pos))(va_list)
{
	int j = 0;
	int lenght = 0;
	f_ok type[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_decimal},
		{"i", print_int},
	};

	lenght = sizeof(type) / sizeof(f_ok);
	while (j < lenght)
	{
		if (charc[pos] == type[j].fn[0])
		{
			return (type[j].f);
		}
		j++;
	}
	return (NULL);
}
