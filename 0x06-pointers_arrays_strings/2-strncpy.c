#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: pointer to the first string
 * @src: pointer to another string
 * @n: number of bytes used
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
