#include "main.h"

/**
 *_print_rev_recursion - print stuff in reverse
 *
 *@s: param
 *
 *return: 0
 */

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}

_print_rev_recursion(s + 1);
_putchar(*s);
}
