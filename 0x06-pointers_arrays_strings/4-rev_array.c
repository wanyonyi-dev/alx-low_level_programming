#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}

