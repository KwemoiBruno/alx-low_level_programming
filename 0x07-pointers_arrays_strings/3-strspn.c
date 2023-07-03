#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string characters to match
 *
 * Returns: number of characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int ptr = strspn(s, accept);

	return (ptr);
}
