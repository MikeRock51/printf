#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define NORMAL_STATE 0
#define LENGTH_STATE 1
#define SPECIFIER_STATE 2

int _printf(const char *format, ...);
int _strlen(const char *c);
int print_char(va_list arg);
int print_int(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);

/**
 * _putchar - Prints a character
 * @c: Character to be printed
 *
 * Return: c as passed
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_spec - A new struct that matches specifier to the appropriate function
 * @speciier: The key to determine which print function to call
 * @print: Pointing to the appropriate print function based on the specifier
 */
typedef struct printer
{
	char specifier;
	int (*print)(va_list arg);
} print_spec;

#endif
