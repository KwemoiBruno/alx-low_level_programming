#include <string.h>

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: number of bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
