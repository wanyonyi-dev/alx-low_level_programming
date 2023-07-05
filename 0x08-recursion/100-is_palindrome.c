#include "main.h"
#include <stddef.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int length = 0;
int start = 0;
int end;
if (s == NULL)
return (0);
while (s[length] != '\0')
length++;
end = length - 1;
while (start < end)
{
if (s[start] != s[end])
return (0);
start++;
end--;
}
return (1);
}
