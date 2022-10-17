#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	char *b;

	a = 'A';
	b = "hello ALX";

	a = _printf("%c, %s\n", a, b);
	return (0);
}
