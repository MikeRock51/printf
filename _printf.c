#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int p_chars;

	_cvrt f_list[] = {
		{"c", p_char},
		{"s", p_str},
		{"%", p_percent},
		{"d", p_int},
		{"i", p_int},
		{"r", p_str_rev},
		{"R", rot13},
		{"b", unsigned_int},
		{"u", unsigned_int},

		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	p_chars = parser(format, f_list, arg_list);

	va_end(arg_list);
	return (p_chars);
}
