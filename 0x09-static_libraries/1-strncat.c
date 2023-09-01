# include "main.h"
/**
 * _strncat - function make concatenate
 * n bytes
 * @dest: input value
 * @src: in[ut value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x;
int y;

x = 0;
while (src[x] != '\0')
{
x++;
}

y = 0;
while (y < n && dest[y] != '\0')
{
src[x] = dest[y];
y++;
}
src[x] = '\0';
return (dest);
}
