# include "main.h"
# include <string.h>
/**
 * _memcpy - function that copies memory area.
 * *dest: destination - function
 * *src: source - function
 * n: length for source - function
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest [i] = src [i];
}
return (dest);
}
