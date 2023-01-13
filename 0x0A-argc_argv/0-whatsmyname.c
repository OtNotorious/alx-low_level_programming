#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 *main - main function
 *
 *@argc: argumentc
 *
 *@argv: arguments vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
char *program_name = strrchr(argv[0], '/');
if (program_name)
{
program_name++;
}
else
{
program_name = argv[0];
}

int i = 0;
while (program_name[i])
{
_putchar(program_name[i]);
i++;
}
_putchar('\n');
return (0);
}
