#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string, can contain the special character *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
/* base case: both strings are empty */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* if s2 contains *, check the next characters recursively */
if (*s2 == '*')
{
/* if the next character of s2 is also *, skip it */
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
/* if the next character of s2 matches s1, or s1 is empty, compare them */
if (*(s2 + 1) == *s1 || *(s2 + 1) == '\0')
return (wildcmp(s1, s2 + 1));
/* otherwise, move s1 forward and try again */
return (wildcmp(s1 + 1, s2));

}

/* if the current characters of s1 and s2 match, compare the next ones */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

/* if none of the above conditions are met, the strings are not identical */
return (0);
}
