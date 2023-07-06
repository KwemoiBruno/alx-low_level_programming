#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first int
 * @y: second int
 *
 * Return: @x raised to power of @y
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	result = pow(x, y);
	return (result);
}
