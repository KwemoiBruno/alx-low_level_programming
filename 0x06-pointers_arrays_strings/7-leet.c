#include <string.h>
/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i;
	char *ptr = str;
	char leet[5] = {'4', '3', '0', '7', '1'};
	char letters[5] = {'a', 'e', '0', 't', 'l'};

	for (; *ptr != '\0'; ptr++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == letters[i] || *ptr == letters[i] - 'a' + 'A')
			{
				*ptr = leet[i];
				break;
			}
		}
	}
	return (str);
}
