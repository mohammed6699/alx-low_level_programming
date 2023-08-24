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

	while (x < n && src[x] != '\0')
	{
		src[x] = dest[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
return (dest);
}
