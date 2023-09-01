# include "main.h"
/**
 * char *_strcat - function to repeate string
 * @dest: inputs
 * @src: inputs
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;

while (src[x] != '\0')
{
x++;
}
while (dest[y] != '\0')
{
src[y] = dest[x];
y++;
}
src[y] = '\0';
return (dest);
}
