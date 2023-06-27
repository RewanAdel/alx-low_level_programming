#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

/**
* struct fun - checks formats
* @z: format
* @y: function
*/
struct fun
{
	char z;
	int (*y)(va_list);
};

/**
* typedef struct fun so - struct definition
* @fun: formats to use
* @so: function
*/

typedef struct fun so;

int _printf(const char *form, ...);
int _strlen(char *s);

/* Funtions to print chars and strings */
int handle_print(const char *format, int *i, va_list list);
int ch(va_list z);
int str(va_list k);
int _putchar(char c);
int print_37(va_list list);
/* Functions to print numbers */
int print_int(va_list list);
#endif
