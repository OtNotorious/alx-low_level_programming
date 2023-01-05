#include "main.h"

/**
 *factorial - factorial of number
 *
 *@n: param
 *
 *return: returns factor or -1
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
