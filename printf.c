#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - Prints format string
 * @format: Specfier to determine the the how to print arguments
 *
 * Return: The length of string printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, j, length = 0;

	print_spec specs[] = {
	{'c', print_char},
	{'i', print_int},
	{'d', print_int},
	{'s', print_string},
	{'%', print_percent},
	{'\0', NULL}
	};

	va_start(args, format);

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			i++;
			length++;
		}
		else if (format[i] == '%')
		{
			i++;
			for (j = 0; specs[j].specifier != '\0'; j++)
			{
				if (format[i] == (specs[j].specifier))
				{
					i++;
					specs[j].print(args);
				}
			}
		}
	}
	va_end(args);
	return (length);
}
