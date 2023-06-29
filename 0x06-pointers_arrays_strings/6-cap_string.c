#include <ctype.h>
#include <stddef.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalize
 *
 * Return: the result
 */
char *cap_string(char *str)
{
	char *ptr = str;

	if (str == NULL)
	{
		return (0);
	}

	while (*str != '\0')
	{
		*str = toupper(*str);
		str++;
	}
	return (ptr);
}
