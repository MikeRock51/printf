#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

#define NORMAL_STATE 0;
#define LENGTH_STATE 1;
#define SPECIFIER_STATE 2;

int _printf(const char *format, ...);

/**
 * print_spec - A new struct that matches specifier to the appropriate function
 * @speciier: The key to determine which print function to call
 * @print: Pointing to the appropriate print function based on the specifier
 */
typedef struct printer {
  char specifier;
  int (*print)(va_list arg);
} print_spec;

#endif
