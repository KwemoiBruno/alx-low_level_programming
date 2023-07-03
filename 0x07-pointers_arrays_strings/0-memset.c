#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
