#include <ctype.h>
/**
 * _isupper - checks for uppercase character
 * Return: 0 for lowercase character 1 for uppercase
 * @c: character to be checked
 */
int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
