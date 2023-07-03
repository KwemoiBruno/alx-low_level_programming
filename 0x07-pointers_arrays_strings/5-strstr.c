#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: string to be searched
 * @needle: string to be searched in haystack
 *
 * Return: pointer to first occurance of @needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	return (ptr);
}
