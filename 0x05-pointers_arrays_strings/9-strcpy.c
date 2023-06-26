#include <string.h>

/**
 * _strcpy - copies string pointed to by src
 * @src: source of string
 * @dest: destination of string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
