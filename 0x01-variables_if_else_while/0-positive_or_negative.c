#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - if function
 *
 *basic use for if
 *
 *more headers goes there
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
printf("\n possitive \n");
}
else if (n == 0)
{
printf("\n Zero \n")
}
else
{
printf("\n negative \n");
}
return (0);
}
