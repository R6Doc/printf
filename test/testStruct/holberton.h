#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
/**
 * struct format_t - format specifier o el tipo marica
 * @type: format specificadorrrr
 * @func: output function to be used 
 */
typedef struct format_t
{
	char *type;
	int (*func)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list valist);
int print_number(va_list valist);
int print_reverse(va_list valist);
int _putchar(char c);
int _strlen(char *s);
void _puts(char *str);
int (*get_spec_func(const char *s))(va_list valist);
#endif
