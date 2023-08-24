# include "main.h"
/***
 * _strncpy - function to copy string
 * @dset: input
 * @src: input
 * @n: input
 * return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (x < n && src[x] != '\0')
	{
		x++;
	}
	while (dest[y] != '\0')
	{
		dest[y] = '\0';
		y++;
	}
return (dest);
}
