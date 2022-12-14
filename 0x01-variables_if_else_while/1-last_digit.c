#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *
 * Return: Always return 0
 */

int main(void)
{
int n;
int lastn = n % 10;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;

if (lastn > 5)
printf("last digit of %d is %d and is greater than 5\n", n, lastn);

else if (lastn == 0)
printf("last digit of %d is %d and is zero\n", n, lastn);

return (0);
}
