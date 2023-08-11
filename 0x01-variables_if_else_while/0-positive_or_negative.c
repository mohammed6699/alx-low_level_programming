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
printf("\n 0: is possitive \n");
}
else if (n == 0)
{
printf("\n 0: is  Zero \n");
}
else
{
printf("\n 0: is  negative \n");
}
return (0);
}
