#include <string.h>

/**
 * _strpbrk - searches a string any of a set of bytes
 * @s: string to be searched
 * @accept: string characters to be searched
 *
 * Return: pointer to the bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	return (ptr);
}
