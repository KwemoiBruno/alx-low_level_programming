#include "main.h"

/**
 * print_most_numbers - prints most numbers from 0 t0 9
 * Return: always 0
 */
void print_most_numbers(void)
{
int i = '0';

while (i <= '9')
{
if (i != '2' && i != '4')
{
_putchar(i);
}
i++;
}
_putchar('\n');
}
