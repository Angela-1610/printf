#ifndef _PRINTF_H
#define _PRINTF_H


#include<stdio.h>
#include<stdarg.h>
#include<limits.h>
#include <unistd.h>

int sh_putchr(char c);
int _printf(const char *format, ...);
int putss(char *c);
int print_base16_upper_lower(va_list arg, char *representation);
int _strlen(char *s);
char *convert_to(char representation[], unsigned int num, int base);


#endif
