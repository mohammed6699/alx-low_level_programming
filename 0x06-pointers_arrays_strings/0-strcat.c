# include "main.h"
/**
 * char *_strcat - function to repeate string
 * *dest: destination , *src: source
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
	y++;
}
src[x] = dest[y];
return (src);
}
