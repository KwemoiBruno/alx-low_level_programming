#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argv: arguments
 * @argc: number of arguments
 *
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
