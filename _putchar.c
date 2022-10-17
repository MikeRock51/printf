#include <unistd.h>

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
