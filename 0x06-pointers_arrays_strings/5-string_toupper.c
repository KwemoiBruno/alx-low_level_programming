#include <stddef.h>
#include <ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @str: pointer to string
 * Return: result
 */
char *string_toupper(char *str)
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
