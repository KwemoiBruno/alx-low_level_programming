#include <ctype.h>
/**
 * _isdigit - checks if input is digit
 * @c: input to be checked
 * Return: 1 if digit otherwise 0
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
