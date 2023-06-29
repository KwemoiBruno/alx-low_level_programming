#include <string.h>
/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char *ptr = str;
	char leet[] = "433710";
	char letters[] = "aeotlAEOTL";

	for (; *ptr != '\0'; ptr++)
	{
		i = 0;
		j = 0;
		while (i < 5 && j == 0)
		{
			j = (*ptr == letters[i]) ? 1 : 0;
			i++;
		}
		if (j == 1)
		{
			*ptr = leet[i - 1];
		}
	}
	return (str);
}
