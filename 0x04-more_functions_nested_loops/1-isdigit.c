#include <stdio.h>
#include "main.h"

/**
 *_isdigit - determine if digit
 *
 *@c: character to determine
 *
 *Return: boolean
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (0);
return (1);
}
