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
	int i = 0;

	while (*ptr)
	{
		if (i == 0 || !isalnum(*(ptr - 1)))
		{
			*ptr = toupper(*ptr);
		}
		i++;
		ptr++;
	}
	return (str);
}
