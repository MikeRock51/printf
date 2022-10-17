#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * _strlen - Checks the length of a string
 * @c: The string to be checked
 *
 * Return: The length of c
 */
int _strlen(const char *c)
{
	int i = 0;

	while (c[i])
	i++;
	return (i);
}

/**
 * print_char - Prints a character
 * @arg: Character to print
 *
 * Return: length of char
 */
int print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	_putchar(character);
	return (1);
}

/**
 * print_int - Prints integers
 * @arg: Integer to print
 *
 * Return: Length of arg
 */
int print_int(va_list arg)
{
	int numb, expo = 1, len = 0;
	unsigned int num;
	char ch;

	numb = va_arg(arg, int);

	if (numb < 0)
	{
		_putchar('-');
		numb = -numb;
	}

	num = numb;

	while (num / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		ch = num / expo + '0';
		len = len + write(1, &ch, 1);
		num = num % expo;
		expo = expo / 10;
	}
	return (len);
}

/**
 * print_string - Prints a string
 * @arg: String to print
 *
 * Return: Length of the string
 */
int print_string(va_list arg)
{
	char *str;
	int i;

	str = va_arg(arg, char *);
	for (i = 0; i < str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_percent - Prints the percent sign
 * @arg: Unused argument
 *
 * Return: Length of char
 */
int print_percent(va_list arg)
{
	(void) arg;
	_putchar('%');
	return (1);
}
