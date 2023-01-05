#include "main.h"

/**
 *factorial() - recursive func
 *
 *@n: param
 *
 *return: 1, -1
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));
}
