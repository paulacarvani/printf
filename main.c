#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * THIS FILE IS MAIN ONLY FOR TEST, DONT PULL!!
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/*    unsigned int ui;
    void *addr;
	*/
	len =_printf("Let's try to printf a simple sentence.\n");
	len2 = printf("OK Let's try to printf a simple sentence.\n");
	/* ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf(" OK Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("OK Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("OK Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("OK Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("OK Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
	_printf("Character:[%c]\n", 'H');
	printf("OK Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("OK String:[%s]\n", "I am a string !");
	/*_printf("Address:[%p]\n", addr);
	  printf("OK Address:[%p]\n", addr);*/
	len =_printf("Percent:[%%]\n");
	len2 =printf("OK Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("OK Len:[%d]\n", len2);
	/*_printf("Unknown:[%r]\n");
	  printf("OK Unknown:[%r]\n");*/
	return (0);
}
