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
	int i = 0;
	int next = 1;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
		    str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		    str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			next = 1;
		}
		else if (next)
		{
			str[i] = toupper(str[i]);
			next = 0;
		}
		i++;
	}
	return (str);
}
