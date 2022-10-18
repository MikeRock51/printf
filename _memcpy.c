#include "main.h"

/**
 * _memcpy - Copies a given memory area
 * @dest: Destination to copy to
 * @src: Source to copy from
 * @n: Size of bytes to copy
 *
 * Return: The new copied memory bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
