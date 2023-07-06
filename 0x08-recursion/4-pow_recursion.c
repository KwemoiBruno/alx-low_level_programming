/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first int
 * @y: second int
 *
 * Return: @x raised to power of @y
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	result = result *  _pow_recursion(x, y - 1);
	return (result);
}
