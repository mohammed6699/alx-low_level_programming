#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - if function
 *
 *basic use for if
 *
 *more headers goes therie
 *betty style doc for function main goes there
 *
 *Return: always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("98 is positive\n");
}
else if (n == 0)
{
printf("0 is zero\n");
}
else
{
printf("-98 is negative\n");
}
return (0);
}
