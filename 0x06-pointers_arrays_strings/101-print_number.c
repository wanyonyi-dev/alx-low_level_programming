#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
int power;
int digit;
int sign = 1;

if (n == 0)
{
_putchar('0');
return;
}

if (n < 0)
{
sign = -1;
_putchar('-');
}
power = 1;
while (power * 10 <= n * sign)
power *= 10;

while (power > 0)
{
digit = (n / power) *sign;
_putchar(digit + '0');
n -= digit *power;
power /= 10;
}
}
