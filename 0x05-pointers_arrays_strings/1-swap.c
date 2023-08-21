# include "main.h"
/**
 * swap_int - function that swap the value
 * for 2 pointers
 * @a, b : inputs
 * return : 0
 */
void swap_int(int *a, int *b)

{
int m;
m = *a;
*b = m;
*a = *b;
}
