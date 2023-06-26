#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, start_i;

	if ((len - 1) % 2 == 0)
	{
		start_i = (len - 1) / 2;
	}
	else
	{
		start_i = len / 2;
	}
	for (i = start_i; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
