#include "main.h"
/**
 * _isupper - checks for lower case charecter
 * @c: The character is to checked
 * Return: 1 for uppercase character and 0 for anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
