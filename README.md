# _PRINTF

## DESCRIPTION

This function is performed to understand the process used to print an n number of characters by combining them with arguments linked to conversion specifiers that we find indicated by the %. This is a project that is part of the training as software developers using the c programming language

## CONTENT

The files include in our repository that make our function work are:

* _printf.c
* holberton.h
* 01functions.c
* 1_funct_decimal_integers.c
* _printinteger.c
* _putchar.c
* get.c
* man_3_printf

## HOW IT WORKS

for our function to operate correctly it must have a main.c, in that file an input is received consisting of a pointer of n characters and n arguments.

~~~

int _printf(const char *format, ...)

~~~


### EXAMPLE

~~~

char name1[] = "Andrea"
char name2[] = "Paula"

_printf("Somos %s y %s", name1 name2);

~~~

The function _printf starts validating the first position of our input and compares that character with some conditions to print or not the character or do another function.

We need to have clear that if in any of that positions we found the symbol % we are going to call another function depending of the conversion specifiers that the next position bring to us.

In the example we are calling the function that prints a string, this functions is:

~~~

int print_string(va_list list)
{
  char *s =va_arg(list, char *);
  int i;
  for(i = 0; s[i]; i++)
  {
    _putchar(s[i]);
  }
  return(i);
}

~~~

Our Output is going to look something like this:

>*Somos Andrea y Paula*


## IMPORTANT

> As we are creating functions depending on the type of conversion specifiers according to each case, those functions are included in a header file called holberton.h, without this file the program will not compile since it does not have to recognize the created functions.

## NOTES

At the moment our printf function has the conversion specifiers that correspond to a character c, string s, percentage % and decimal d.

## AUTORS

> Yudi Andrea Angola Pasos https://github.com/122-63

> Paula Carvajal https://github.com/paulacarvani