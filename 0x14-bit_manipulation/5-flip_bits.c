#include "main.h"
/**
 * flip_bits - counts the number of bit to be changed
 * to get from one number to another.
 * @m:second number
 * @n:first number
 * Return: number of bits to change
 * created: by wanyonyi
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}

return (count);
}
