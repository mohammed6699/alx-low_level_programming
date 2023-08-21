# include "main.h"
# include <string.h>
/**
 *void rev_string(char *s) - function to print reverse string
 *length, middle, i : inputs
 *s: string
 *Return: void
 */
void rev_string(char *s)
{
int length = strlen(s);
int middle = length / 2;
int i;
char temp;
for (i = 0; i < middle; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}

