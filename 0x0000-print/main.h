#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

#include <stdlib.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int _printf(const char *form, ...);
int _strlen(char *s);
int ch(va_list z);
int str(va_list k);
int _putchar(char c);

#endif /* MAIN_H */
