#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
