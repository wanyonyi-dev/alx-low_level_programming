#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of command line arguments (including program name).
 * @argv: An array of strings containing the command line arguments.
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
int i;
printf("%02x", ((unsigned char *)main)[0]);
for (i = 1; i < num_bytes; i++)
{
printf(" %02x", ((unsigned char *)main)[i]);
}
printf("\n");

return (0);
}
