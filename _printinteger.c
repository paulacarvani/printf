#include "holberton.h"
/**
 * _printinteger - print recursive a character  
 * @n: variable
 * Return: Always 0
 */
void _printinteger(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		_printinteger(n / 10);
		_putchar(n % 10 + '0');
	}
}
