#include "holberton.h"
/**
 * get - brint o get the corret fuction
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
