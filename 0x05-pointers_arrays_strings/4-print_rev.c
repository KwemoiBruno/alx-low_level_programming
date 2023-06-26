#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: always 0.
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int j;

	for (j = len - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}
