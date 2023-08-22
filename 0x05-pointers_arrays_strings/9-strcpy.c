# include <stdio.h>
# include <string.h>
/**
 *char *_strcpy(char *dest, char *src) - function to copy
 *The string
 *@i: input
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
return (dest);
}
