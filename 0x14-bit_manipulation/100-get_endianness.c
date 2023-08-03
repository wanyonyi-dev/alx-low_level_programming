#include "main.h"

/**
 * get_endianness - checks if a machine is big or little endian
 * Return: 0 for big, 1 for little
 * created:by wanyonyi
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;

return (*c);
}
