#include "main.h"

/**
 * p_char - Prints character
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int p_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * p_str - Prints a string
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int p_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * p_percent - Prints a percent symbol
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int p_percent(__attribute__((unused))va_list list)
{
	 _putchar('%');
	return (1);
}

/**
 * p_int - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int p_int(va_list list)
{
	int num_length;

	num_length = p_num(list);

	return (num_length);
}

/**
 * unsigned_int - Prints an unsigned int in binary
 * @list: List of argument
 * Return: number
 */
int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (p_u_num(num));

	if (num < 1)
		return (-1);

	return (p_u_num(num));
}
