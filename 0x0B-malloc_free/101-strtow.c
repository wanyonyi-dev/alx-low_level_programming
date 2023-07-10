#include "main.h"
#include <stdlib.h>
#include <string.h>

int count_words(char *str);
char **free_memory(char **words, int word_count);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int word_count = 0, i = 0, j = 0, k = 0, len = 0;

if (str == NULL || str[0] == '\0')
return (NULL);

word_count = count_words(str);
words = malloc(sizeof(char *) * (word_count + 1));

if (words == NULL)
return (NULL);

while (str[i])
{
if (str[i] != ' ')
{
len = 0;
j = i;

while (str[j] != ' ' && str[j] != '\0')
{
len++;
j++;
}

words[k] = malloc(sizeof(char) * (len + 1));

if (words[k] == NULL)
return (free_memory(words, word_count));
strncpy(words[k], &str[i], len);
words[k][len] = '\0';
i = j;
k++;
}
else
{
i++;
}
}

words[k] = NULL;
return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words from
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0, i = 0;

while (str[i])
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
i++;
}

return (count);
}

/**
 * free_memory - Frees the allocated memory for words array
 * @words: The array of words
 * @word_count: The number of words
 *
 * Return: NULL
 */
char **free_memory(char **words, int word_count)
{
int i;

for (i = 0; i < word_count; i++)
{
free(words[i]);
}

free(words);
return (NULL);
}

