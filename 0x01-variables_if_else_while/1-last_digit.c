#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - if fucntion
 *
 *basic use for if function
 *
 *more headers goes there
 *
 *betty style doc for function main goes there
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
{
printf("Last digit of 980 is 0 and is 0\n");
}
else if (n > 5)
{
printf("Last digit of 98 is 8 and is greater than 5\n");
}
else
{
printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
}
return (0);
}
