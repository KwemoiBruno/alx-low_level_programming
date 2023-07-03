#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be searched
 *
 * Return: pointer to the first occurance of c
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}

