#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	(void) *argv;
	printf("%d\n", argc);
	return (0);
}
