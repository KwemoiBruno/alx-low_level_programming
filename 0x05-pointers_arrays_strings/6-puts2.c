#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len - 1; i++)
	{
		if (str[i] % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
